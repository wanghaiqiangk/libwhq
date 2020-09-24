#include "renran.h"

int main(int argc, char *argv[])
{
    printf("Current epoch(s) %ld\n", renran_second());
    printf("Current epoch(ms) %ld\n", renran_millisecond());
    printf("Current epoch(double) %.3f\n", renran_double());
    printf("Calendar time %s\n", renran_string("%Y-%m-%d %H:%M:%S", 256));
    return 0;
}
