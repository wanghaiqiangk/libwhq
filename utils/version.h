#include <stdio.h>
#include <gnu/libc-version.h>

void glibc_version()
{
    printf("glibc version: %s\n", gnu_get_libc_version());
}
