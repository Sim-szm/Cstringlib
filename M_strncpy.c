#include "Mstring.h"
char *M_strncpy(char *s1,const char *s2,size_t n ){
    char *s;
    for(s=s1 ; *s2!='\0' ,n>0 ; n-- )
        *s++=*s2++;
    for( ;n>0;n--)
        *s++='\0';
    return s1;
}  