#include "Mstring.h"
void *M_memchr(const void *s,int c,size_t n){
    const unsigned char *su;
    for(su=s ; n>0 ; su++,n--)
        if(*su==(unsigned char )c)
            return (void *)su;
        return (void *)NULL;
}
