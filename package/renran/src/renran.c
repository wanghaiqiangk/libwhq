#include "renran.h"

#define RENRAN_SIZE 1024

char tmpStr[RENRAN_SIZE];

long renran_second()
{
    return time(NULL);
}

long renran_millisecond()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

double renran_double()
{
    return (double)renran_millisecond() / 1000;
}

char * renran_string(const char *format, int max)
{
    memset(&tmpStr, 0, sizeof(tmpStr));
    time_t tt = renran_second();
    size_t ret = strftime(tmpStr, max, format, localtime(&tt));
    if (!ret)
    {
        printf("Renran can't convert string\n");
        return NULL;
    }
    return tmpStr;
}
