#ifndef RENRAN_H
#define RENRAN_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <string.h>

long renran_second();
long renran_millisecond();
double renran_double();
char * renran_string(const char *format, int max);

#endif /* RENRAN_H */
