#ifndef ROKU_VALUE_H_INCL
#define ROKU_VALUE_H_INCL

#include "common.h"
#include <limits.h>

#define R_VALUE_SIZE (R_VALUE_BITS / 8)

struct RThread_;
typedef RValue (*RCFunction)(struct RThread_ *t, RValue *frame);

/* Identifiers of member tables defined in TypeInfo */
typedef enum {
    MT_VAR_SET_PUBLIC,
    MT_VAR_SET_PRIVATE,
    MT_VAR_GET_PUBLIC,
    MT_VAR_GET_PRIVATE,
    MT_METHOD_PUBLIC,
    MT_METHOD_PRIVATE,
    R_NUM_MEMBER_HASH_TABLES
} RMemberTableType;

#define A_TYPE_INFO_VALUE_SIZE (R_NUM_MEMBER_HASH_TABLES + 1)

/* FixArray (Array with a fixed size; used internally) */
typedef struct {
    RValue header;
    RValue elem[1];
} RFixArray;

/* Class instance */
typedef struct {
    RValue type;
    RValue member[1];
} RInstance;

/* Type object (class or interface) */
typedef struct RTypeInfo_ {
    RValue header1;
    RValue header2;
    RValue memberTable[R_NUM_MEMBER_HASH_TABLES];
    RValue interfaces;
    struct RTypeInfo_ *super;
    struct RSymbolInfo_ *sym;
    unsigned create;       
    unsigned memberInitializer;
    unsigned numVars;     
    unsigned totalNumVars; 
    unsigned dataSize;     
    unsigned dataOffset;   
    unsigned instanceSize; 
    unsigned numInterfaces; 
    unsigned interfacesSize; 
    char isInterface;     
    char hasEqOverload;  
    char hasHashOverload; 
    char hasMemberInitializer; 
    char hasFinalizer;   
    char hasFinalizerOrData; 
    char isValid; 
    char isSuperValid;
    int extDataMember;
} RTypeInfo;

#endif
