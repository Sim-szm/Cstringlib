#include "Mstring.h"
char *M_strchr(const char *s,int c){
    for( ; *s!=((char)c) ; s++)
        if(*s=='\0')
            return NULL;
        return ((char *)s) ;
}
