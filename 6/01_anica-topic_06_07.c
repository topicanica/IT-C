#include<stdio.h>
#include<string.h>
#include<ctype.h>

char* zalijepi(char *str1,char *str2,char *str3)
{
    if(strlen(str3) < strlen(str2) && strlen(str3) < strlen(str1))
    {
        return strcat(str1,str2);
    }
    else if (strlen(str2) < strlen(str1) && strlen(str2) < strlen(str3))
    {
        return strcat(str1,str3);
    }
    else
    {
        return strcat(str2,str3);
    }
}
int main(void)
{
    char str1[]="mi";
    char str2[]="volimo";
    char str3[]="PMA";
    printf("%s",zalijepi(str1,str2,str3));
    return 0;
}
