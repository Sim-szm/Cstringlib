#include "Mstring.h"
int M_memcmp(const void *s1,const void *s2,size_t n){
    const char *p1,*p2;
    for(p1=s1,p2=s2 ; 0<n ; ++p1,++p2, --n)
        if(*p1!=*p2)
            return ( (*p1>*p2) ? +1 : -1 );
        return 0;
}