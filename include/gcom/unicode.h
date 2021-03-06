/*

Copyright (c) 1999, 2000 Samuel A. Falvo II

This software is provided 'as-is', without any implied or express warranty.
In no event shall the authors be held liable for damages arising from the
use this software.

Permission is granted for anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software in a
   product, an acknowledgment in the product documentation would be
   appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.

3. This notice may not be removed or altered from any source
   distribution.

*/

#ifndef GCOM_UNICODE_H
#define GCOM_UNICODE_H

/*
 * gcom/unicode.h
 * GCOM Release 0.1
 */

#include <gcom/types.h>
#include <gcom/errors.h>

/************************************************************************/
/* Unicode String Functions						*/
/************************************************************************/

HRESULT gCoUnicodeStringToAscii    ( wchar *, char *, uint32 );
HRESULT gCoAsciiStringToUnicode    ( char *, wchar *, uint32 );

uint32  gCoUnicodeStringLength     ( wchar * );
uint32  gCoUnicodeStringSizeInBytes( wchar * );

void    gCoUnicodeStringCopy       ( wchar *, wchar * );
HRESULT gCoUnicodeStringDuplicate  ( wchar *, wchar ** );
int     gCoUnicodeStringCompare    ( wchar *, wchar * );
void    gCoUnicodeStringConcatenate( wchar *, wchar * );

#endif
