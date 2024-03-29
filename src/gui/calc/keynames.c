/* Hey EMACS -*- linux-c -*- */
/* $Id$ */

/*  TiEmu - Tiemu Is an EMUlator
 *
 *  Copyright (c) 2000-2001, Thomas Corvazier, Romain Lievin
 *  Copyright (c) 2001-2003, Romain Lievin
 *  Copyright (c) 2003, Julien Blache
 *  Copyright (c) 2004, Romain Li�vin
 *  Copyright (c) 2005, Romain Li�vin
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
 *  Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include "keydefs.h"

typedef struct {
    int         value;
    const char  *name;
} KeyTuple;

const KeyTuple tikeys[] = {
    { TIKEY_DOWN,       "TIKEY_DOWN" },
    { TIKEY_RIGHT,      "TIKEY_RIGHT" },
    { TIKEY_UP,         "TIKEY_UP" },
    { TIKEY_LEFT,       "TIKEY_LEFT" },  
    { TIKEY_HAND,       "TIKEY_HAND" },
    { TIKEY_SHIFT,      "TIKEY_SHIFT" },
    { TIKEY_DIAMOND,    "TIKEY_DIAMOND" },
    { TIKEY_2ND,        "TIKEY_2ND" },
    { TIKEY_3,          "TIKEY_3" },
    { TIKEY_2,          "TIKEY_2" },
    { TIKEY_1,          "TIKEY_1" },
    { TIKEY_F8,         "TIKEY_F8" },
    { TIKEY_W,          "TIKEY_W" },
    { TIKEY_S,          "TIKEY_S" },
    { TIKEY_Z,          "TIKEY_Z" },
    { TIKEY_6,          "TIKEY_6" },
    { TIKEY_5,          "TIKEY_5" },
    { TIKEY_4,          "TIKEY_4" },
    { TIKEY_F3,         "TIKEY_F3" },
    { TIKEY_E,          "TIKEY_E" },
    { TIKEY_D,          "TIKEY_D" },
    { TIKEY_X,          "TIKEY_X" },
    { TIKEY_9,          "TIKEY_9" },
    { TIKEY_8,          "TIKEY_8" },
    { TIKEY_7,          "TIKEY_7" },
    { TIKEY_F7,         "TIKEY_F7" },
    { TIKEY_R,          "TIKEY_R" },
    { TIKEY_F,          "TIKEY_F" },
    { TIKEY_C,          "TIKEY_C" },
    { TIKEY_STORE,      "TIKEY_STORE" },
    { TIKEY_COMMA,      "TIKEY_COMMA" },
    { TIKEY_PARIGHT,    "TIKEY_PARIGHT" },
    { TIKEY_PALEFT,     "TIKEY_PALEFT" },
    { TIKEY_F2,         "TIKEY_F2" },
    { TIKEY_T,          "TIKEY_T" },
    { TIKEY_G,          "TIKEY_G"  },
    { TIKEY_V,          "TIKEY_V" },
    { TIKEY_SPACE,      "TIKEY_SPACE"},
    { TIKEY_TAN,        "TIKEY_TAN"},
    { TIKEY_COS,        "TIKEY_COS" },
    { TIKEY_SIN,        "TIKEY_SIN" },
    { TIKEY_F6,         "TIKEY_F6" },
    { TIKEY_Y,          "TIKEY_Y" },
    { TIKEY_H,          "TIKEY_H" },
    { TIKEY_B,          "TIKEY_B" },
    { TIKEY_DIVIDE,     "TIKEY_DIVIDE"},
    { TIKEY_P,          "TIKEY_P"}, 
    { TIKEY_ENTER2,     "TIKEY_ENTER2"}, 
    { TIKEY_LN,         "TIKEY_LN" },
    { TIKEY_F1,         "TIKEY_F1" },
    { TIKEY_U,          "TIKEY_U" },
    { TIKEY_J,          "TIKEY_J" },
    { TIKEY_N,          "TIKEY_N" },
    { TIKEY_POWER,      "TIKEY_POWER"},
    { TIKEY_MULTIPLY,   "TIKEY_MULTIPLY" },
    { TIKEY_APPS,       "TIKEY_APPS" },
    { TIKEY_CLEAR,      "TIKEY_CLEAR" },
    { TIKEY_F5,         "TIKEY_F5"  },
    { TIKEY_I,          "TIKEY_I" },
    { TIKEY_K,          "TIKEY_K" },
    { TIKEY_M,          "TIKEY_M" },
    { TIKEY_EQUALS,     "TIKEY_EQUALS"},
    { TIKEY_NU,         "TIKEY_NU"}, 
    { TIKEY_ESCAPE,     "TIKEY_ESCAPE"}, 
    { TIKEY_MODE,       "TIKEY_MODE"}, 
    { TIKEY_PLUS,       "TIKEY_PLUS"}, 
    { TIKEY_O,          "TIKEY_O" },
    { TIKEY_L,          "TIKEY_L" },
    { TIKEY_THETA,      "TIKEY_THETA" },
    { TIKEY_BACKSPACE,  "TIKEY_BACKSPACE" },
    { TIKEY_NEGATE,     "TIKEY_NEGATE"}, 
    { TIKEY_PERIOD,     "TIKEY_PERIOD" },
    { TIKEY_0,          "TIKEY_0" },
    { TIKEY_F4,         "TIKEY_F4" },
    { TIKEY_Q,          "TIKEY_Q" },
    { TIKEY_A,          "TIKEY_A" },
    { TIKEY_ENTER1,     "TIKEY_ENTER1"}, 
    { TIKEY_MINUS,      "TIKEY_MINUS"},
    { TIKEY_ON,         "TIKEY_ON"},
    { TIKEY_ALPHA,      "TIKEY_ALPHA" },
    { TIKEY_EE,         "TIKEY_EE"  },
    { TIKEY_CATALOG,    "TIKEY_CATALOG" },
    { TIKEY_HOME,       "TIKEY_HOME" },
    { TIKEY_PIPE,       "TIKEY_PIPE" },
    { TIKEY_VOID,       "TIKEY_VOID"},
    { -1, "" },
};
