#!/bin/sh
#
# C.f. http://anonscm.debian.org/viewvc/debichem/unstable/openbabel/debian/get-orig-source.sh
#

set -ex

UPSTREAM_VERSION=$2
ORIG_TARBALL=$3

REAL_TARBALL=`readlink -f ${ORIG_TARBALL}`

WORKING_DIR=`dirname ${ORIG_TARBALL}`

ORIG_TARBALL_DFSG=`echo ${ORIG_TARBALL} | sed -e "s/\(${UPSTREAM_VERSION}\)\(\.orig\)/\1+dfsg\2/g"`
ORIG_TARBALL_DIR=`echo ${ORIG_TARBALL_DFSG} | sed -e "s/_\(${UPSTREAM_VERSION}\)/-\1/g" -e "s/\.tar\.gz//g"`
ORIG_TARBALL_DIR_STRIP=`basename ${ORIG_TARBALL_DIR}`

mkdir -p ${ORIG_TARBALL_DIR}
tar --directory=${ORIG_TARBALL_DIR} --strip 1 -xzf ${REAL_TARBALL} || exit 1
rm -f ${ORIG_TARBALL} ${REAL_TARBALL}

# delete binaries:
find ${ORIG_TARBALL_DIR} -name "*.sys" -o -name "*.exe" -o -name "*.o" -o -name "*.dll" | xargs rm

tar --remove-files --directory ${WORKING_DIR} -czf ${ORIG_TARBALL_DFSG} ${ORIG_TARBALL_DIR_STRIP} || exit 1

exit 0
