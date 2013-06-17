#include "Mstring.h"
extern char *M_strchr(const char *,int c);
char *M_strstr(const char *s1,const char *s2){
    const char *p1,*p2;
    if(*s2=='\0'||s2==NULL)
        return ((char *)s1);
    for( ; (s1=M_strchr(s1,*s2))!=NULL ; ++s1)
    {
        for(p1=s1 , p2=s2 ; ; )
        {
            if(*++p2=='\0')
                return ((char *)s1);  
            else if (*++p1!=*p2)
                break;
        }
        
    }
    return NULL;
}