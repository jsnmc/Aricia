// Aricia.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Aricia.h"


// This is an example of an exported variable
ARICIA_API int nAricia=0;

// This is an example of an exported function.
ARICIA_API int fnAricia(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Aricia.h for the class definition
CAricia::CAricia()
{
	return;
}
