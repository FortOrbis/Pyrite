// Pyrite
// core.h

#include <Common.h>


// Shorthand names
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;
typedef float    f32;
typedef double   f64;


#define PUBLIC_ATTRIBUTE __attribute__((visibility("default")))
#define WEAK_ATTRIBUTE   __attribute__((weak, visibility("hidden")))

