#include "Mstring.h"
void *M_memmove(void *s1,const void *s2,size_t n){
    char *p1;
    const char *p2;
    p1=s1;
    p2=s2;
    if(p2<p1 && p1<p2+n)
        for(p1+=n,p2+=n ; n>0 ; --n)
            *--p1=*--p2;
        else
            for( ; n>0 ; --n)
                *p1++=*p2++;
            return ( s1 );
            
}
