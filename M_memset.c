#include "Mstring.h"
void *M_memset(void *s ,int c,size_t n){
    char *su;
    for(su=s ; n>0 ; su++,n--)
    {
        *su=(char)c;
    }
    return s;
}