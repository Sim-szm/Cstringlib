#include "Mstring.h"
void *M_memcpy(void *s1,const void *s2,size_t n){
    char *p1;
    const char *p2;
    for(p1=s1,p2=s2 ; 0<n ; p1++,p2++ , --n)
        *p1=*p2;
    return s1;
}