#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    va_list list;  //declaring a va_list type
    int s = 0;
    int i;

    va_start(list,count); // initializing a va_list type which take the last knowing argument
    for (i = 0; i < count; i++)
        s = s + va_arg(list, int);  //va_arg - return the next argument tooken by the function
    va_end(list);
    return (s);

}

int min(int count,...) {

return (1);
}

int max(int count,...) {
return (1000000);
}
