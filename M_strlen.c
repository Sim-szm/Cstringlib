#include "Mstring.h"
size_t M_strlen(const char *s){
    int len=0;
    const char *p;
    for( p=s ; *p!='\0' ; *p++)
        len++;
    return len;
}