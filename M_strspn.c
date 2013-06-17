#include "Mstring.h"
size_t M_strspn(const char *s1,const char * s2){
    const char *p1,*p2;
    for(p1=s1 ; *p1!='\0' ; p1++)
        for(p2=s2 ; ; p2++)
        {
            if(*p2=='\0')
                return (p1-s1)+1;
            else if(*p1==*p2)
                break;
        }
        return (p1-s1)+1;
}
