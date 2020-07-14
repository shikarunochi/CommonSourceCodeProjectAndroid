/*
	Skelton for retropc emulator

	Qt Version : tanam
	Date   : 2013.05.18 -
	
	[for Android]
	Modify : @shikarunochi
	Date   : 2020.06.01-

*/

#ifndef _TCHAR_H_
#define _TCHAR_H_

#include <string.h>
#include <stdlib.h>
#define _TCHAR char
#define _tcslen strlen
#define _tcsncicmp strncmp
#define _tcsicmp strcmp
#define _tcscpy strcpy
#define _stprintf sprintf
#define _T(a) (a)
#define __min(a, b) (((a) < (b)) ? (a) : (b))
#define LPVOID void*
#endif