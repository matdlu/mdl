/*
 * shorter type declarations
 */
#ifndef MSD_TYPE_H
#define MSD_TYPE_H
/*
char
short
int
long
 */
typedef unsigned char      uc;
typedef unsigned short int us;
typedef unsigned int       ui;
typedef unsigned long int  ul;

#ifdef __STDC_VERSION__ // at least C99
typedef long long int ll;
typedef unsigned long long int ull;
#endif

#ifdef _STDDEF_H
typedef ptrdiff_t iptr;
typedef size_t uptr;
#endif

#ifdef _STDINT_H
typedef int8_t    i8;
typedef int16_t   i16;
typedef int32_t   i32;
typedef int64_t   i64;
typedef intmax_t  im;
typedef uint8_t   u8;
typedef uint16_t  u16;
typedef uint32_t  u32;
typedef uint64_t  u64;
typedef uintmax_t um;

typedef int_least8_t   il8;
typedef int_least16_t  il16;
typedef int_least32_t  il32;
typedef int_least64_t  il64;
typedef uint_least8_t  ul8;
typedef uint_least16_t ul16;
typedef uint_least32_t ul32;
typedef uint_least64_t ul64;

typedef int_fast8_t   if8;
typedef int_fast16_t  if16;
typedef int_fast32_t  if32;
typedef int_fast64_t  if64;
typedef uint_fast8_t  uf8;
typedef uint_fast16_t uf16;
typedef uint_fast32_t uf32;
typedef uint_fast64_t uf64;
#endif

#endif //MSD_TYPE_H
