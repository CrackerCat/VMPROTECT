#ifndef _VM_DEBUG
#define _VM_DEBUG

#include "./vmcpu.hpp"
#include "global.hpp"

/*
Not support development on Windows right now!
#define WIN_SOCK
*/

#ifndef VMTESTS
    #define PORT 9313
    #include "./nethelpers.hpp"
#endif

#endif