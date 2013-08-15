/* Hey EMACS -*- linux-c -*- */
/* $Id: stdints.h 368 2004-03-22 18:42:08Z roms $ */

/*  libtifiles - Ti File Format library, a part of the TiLP project
 *  Copyright (C) 1999-2004  Romain Lievin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/* 
   Encapsulate the ISO-C99 'stdint.h' header for platforms which haven't it
*/

#ifndef __TIEMU_STDINT__
#define __TIEMU_STDINT__

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef HAVE_STDINT_H
# include <stdint.h>
#else
# if defined(__WIN32__)
#  include <windows.h>

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4142 )
#endif

typedef unsigned __int8		uint8_t;
typedef unsigned __int16	uint16_t;
typedef unsigned __int32	uint32_t;
typedef unsigned __int64	uint64_t;

typedef __int8 		int8_t;
typedef __int16 	int16_t;
typedef __int32 	int32_t;
typedef __int64		int64_t;

typedef int64_t   intmax_t;

#ifdef _MSC_VER
#pragma warning( pop ) 
#endif

# elif defined(__BSD__)
#  include <inttypes.h>
# else

#  include <inttypes.h>
# endif				/* __WIN32__, __BSD__ */

#endif				/* HAVE_STDINT_H */

#endif				/* __TIFILES_STDINT__ */
