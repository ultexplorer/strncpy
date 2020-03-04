#include <stdio.h>
#include <string.h>
#define SIZE 1000

void my_strncpy(char *s, char *t, int n);
void my_strncat(char *s, char *t, int n);
int my_strncmp(char *s, char *t, int n);

int main()
{
    char s1[SIZE]="hro hru hre hron";
    char s2[SIZE]="HRON";
    char s3[SIZE]="HRO";

    my_strncat(s1, s2, 3);

    printf("%s\n", s1);

    int y=my_strncmp(s1, s3, 2);
    printf("%d %s\n", y, s1);

    return 0;
}

void my_strncpy(char *s, char *t, int n)
{
    while ((*s++ = *t++) && n-- > 0);
    *--s='\0';
}

void my_strncat(char *s, char *t, int n)
{
    my_strncpy(s+strlen(s), t, n);
}

int my_strncmp(char *s, char *t, int n)
{
    for(; *s==*t; s++,t++){
        if(*s=='\0' || --n <= 0) return 0;
    }
    return *s-*t;
}