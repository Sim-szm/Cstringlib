#include "Mstring.h"
char *M_strcpy(char *s1,const char *s2){
    char *s=s1;
    while(*s2!='\0'&&*s!='\0')
        *s++=*s2++;
    *s='\0';
    return s1;
}