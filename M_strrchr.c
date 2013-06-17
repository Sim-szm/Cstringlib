#include "Mstring.h"
char *M_strrchr(const char *s,int c){
    const char *sc;
    for( sc=NULL ;  ; *s++)
    {
        if(*s=='\0')
            return ((char *)sc);
        if(*s==(char)c)
            sc=s;
    }
    
}