/*
   15. Use typedef to create types named Int8, Int16, and Int32.
       Define the types so that they represent 8-bit, 16-bit,
       and 32-bit integers on your machine.
*/

#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

int main(void)
{
    // This will work on UNIX x86_64 systems
    printf("%lu\n", sizeof(Int8)); // 1 — 8 bits, 1 byte
    printf("%lu\n", sizeof(Int16)); // 2 - 16 bits, 2 bytes
    printf("%lu\n", sizeof(Int32)); // 4 - 32 bits, 4 bytes

    return 0;
}