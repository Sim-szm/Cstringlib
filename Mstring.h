#ifndef _M_STRING
#define _M_STRING
#ifndef _YVALS
#include<yvals.h>
#endif

#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

#ifndef _SIZE_T_DEFINED
typedef unsigned int size_t;
#define _SIZE_T_DEFINED
#endif

void *M_memchr(const void *,int ,size_t );
void *M_memcpy(void *,const void *,size_t );
void *M_memmove(void *,const void *,size_t );
char *M_strcpy(char *,char *);
char *M_strcat(char *,const char *);
char *M_strncat(char *,const char *,size_t );
int M_memcmp(const void *,const void *,size_t );
int M_strcmp(const char *,const char *);
int M_strncmp(const char *,const char *,size_t );
void *M_memset(void *,int ,size_t );
size_t M_strlen(const char *);
char *M_strncpy(char *,const char *,size_t );
size_t M_strspn(const char *s1,const char * s2);
char *M_strchr(const char *,int );
char *M_strrchr(const char *,int );
char *M_strstr(const char *,const char *);
size_t M_strcspn(const char *s1,const char *s2);

#endif 
