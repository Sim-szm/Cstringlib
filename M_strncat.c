#include "Mstring.h"
char *M_strncat(char *s1,const char *s2,size_t n){
    char *s;
    for(s=s1 ; *s!='\0' ; ++s ) ;
    for( ; n>0 && *s2!='\0' ; --n )
        *s++ = *s2++;
    *s='\0';
    return s1;
    
}