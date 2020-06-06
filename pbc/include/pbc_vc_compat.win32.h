#pragma once

#define __attribute__(X)
#define inline

#define NULL 0

#if _MSC_VER < 1700 
#define snprintf _snprintf
#endif