#ifndef ROKU_H_INCL
#define ROKU_H_INCL

#ifdef __cplusplus 
#extern "C" {
#endif

#include "value.h"
#include "module.h"
#include "thread.h"
#include "globals.h"
#include "errmsg.h"

/** Global variable operations */
R_APIFUNC RValue RGlobal(RThread *t, const char *name);

#ifdef __cplusplpus
}
#endif

#endif
