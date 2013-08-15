How to build TiEmu for iPAQ H3970 ?

First, the main site for Linux PDA support is <http://www.handhelds.org>.
You will find all you need about the Familiar distribution and GPE (GTK).

Cross-compilation is covered here: 
<http://handhelds.org/moin/moin.cgi/GpeCrossCompilation>

Some tips:
<http://www.handhelds.org/minihowto/porting-software.html>

We will use the easier method (and probably the best one): OpenEmbedded based 
GPE SDK. The latest one is available here: <http://handhelds.org/~florian/sdk/gpe-sdk-20050210.tar.bz2>.
Almost everything you need should be included in the archive, just unpack it to /.

To cross-compile TiEmu and the TiLP framework, copy the cross-config.sh script at the top of the source and run it.
If this does'nt work, you can follow the guidelines above...

To install connection:
1. modprobe usbnet
2. ifconfig usb0 192.168.0.200 up
3. ssh/scp

To mount SD card:
1. edit /etc/modutils
2. Add into 'h3900_mmc':
   h3900_asic
   mmc_asic3
   vfat
3. run update-modules
4. mount /dev/mmc/part1 /usr/local

To build a GPE application, you need to do this:

1. export PKG_CONFIG_PATH=/usr/local/arm/oe/arm-linux/lib/pkgconfig
2. export PATH=/usr/local/arm/oe/bin:$PATH
3. Change to the location of your source
4. Run ./configure --host=arm-linux --disable-nls 
   Option: --prefix=/usr/local/arm/oe/arm-linux
5. Files are installed in /usr/local/arm/oe/arm-linux if you choose the option.
6. On the iPAQ, you must copy files with the same directory tree (aka
/usr/local/arm/oe/arm-linux)

To debug:

1. Get gdb source (the same version as arm-linux-gdb if possible, 6.2)
2. Go to gdb/gdbserver, run ./configure --host=arm-linux and do make
3. You will get a gdbserver executable targetted for ARM. You can strip it 
   to reduce size.
4. Copy gdbserver executable onto the iPAQ (with scp). 
5. Run 'gdbserver tiemu host:1234'
6. Run locally 'gdb ./tiemu'
7. Type in 'remote target ipaq:1234'
8. Type in 'continue' for running (bug: don't type run !)

That's all !

---

Thanks to Andrew Seddon of Cambridge Signal Processing <http://camsig.co.uk)
who donated a PDA (iPAQ PocketPC H3970 with GPE installed).

Thanks to Kevin for some tips about gdb.

---

15/04/2005, Romain Li�vin
