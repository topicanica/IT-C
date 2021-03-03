#include<stdio.h>
#include<ctype.h>
#include<string.h>

int izracunaj(char *str)
{
    int d,m,g;
    int trenutna=2018;
    sscanf(str,"%d.%d.%d",&d,&m,&g);
    int godine=trenutna-g;
    return godine;
}
int main(void)
{
    char str[11]="03.10.1998";
    printf("osoba ima %d godina",izracunaj(str));
    return 0;
}
