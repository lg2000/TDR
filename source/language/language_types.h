/**
 * Autogenerated by TData Compiler (0.0.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#ifndef _H_LANGUAGE_LANGUAGE_TYPES_H
#define _H_LANGUAGE_LANGUAGE_TYPES_H

#include "platform/tlibc_platform.h"



typedef enum _EN_TD_LANGUAGE_STRING EN_TD_LANGUAGE_STRING;
enum _EN_TD_LANGUAGE_STRING
{
	E_LS_UNKNOW = 0,
	E_LS_CANNOT_USE_RESERVED_LANGUAGE_KEYWORD = 1,
	E_LS_SYNTAX_ERROR = 2,
	E_LS_CANNOT_OPEN_FILE = 3,
	E_LS_OUT_OF_MEMORY = 4,
	E_LS_CHARACTER_CONSTANT_FORMAT_ERROR = 5,
	E_LS_STRING_CONSTANT_FORMAT_ERROR = 6,
	E_LS_NUMBER_ERROR_RANGE = 7,
	E_LS_IDENTIFIER_LENGTH_ERROR = 8,
	E_LS_PACKAGE_NAME_TOO_LONG = 9,
	E_LS_CAN_NOT_FIND_IDENTIFIER = 10,
	E_LS_NOT_TYPE = 11,
	E_LS_IDENTIFIER_REDEFINITION = 12,
	E_LS_CAN_NOT_DEFINE_STRING_LENGTH_HERE = 13,
	E_LS_CONSTANT_TYPES_DO_NOT_MATCH = 14,
	E_LS_CONSTANT_OVER_THE_RANGE = 15,
	E_LS_TOO_MANY_MEMBERS = 16,
};

#define TD_LANGUAGE_STRING_NUM 17

#define TD_MAX_LANGUAGE_STRING_LENGTH 1024

typedef struct _ST_TD_LANGUAGE_STRING ST_TD_LANGUAGE_STRING;
typedef struct _ST_TD_LANGUAGE_STRING
{
	EN_TD_LANGUAGE_STRING language_string_number;
	tchar language_string[TD_MAX_LANGUAGE_STRING_LENGTH];
};

typedef struct _ST_TD_LANGUAGE_STRING_LIBRARY ST_TD_LANGUAGE_STRING_LIBRARY;
struct _ST_TD_LANGUAGE_STRING_LIBRARY
{
	tuint16 language_string_list_num;
	ST_TD_LANGUAGE_STRING language_string_list[TD_LANGUAGE_STRING_NUM];
};

#endif //_H_LANGUAGE_LANGUAGE_TYPES_H

