#include<stdio.h>
#include<string.h>
#include<ctype.h>

int funkcija(FILE *fp)
{
    char str[1024];
    while(fscanf(fp,"%s",str)!=EOF)
    {
        if((str[strlen(str)-3]=='s') && (str[strlen(str)-2]=='k') && (str[strlen(str)-1]=='a'))
            printf("%s\n",str);
    }
    return 0;
}
int main(void)
{
    FILE *fp;
    fp=fopen("datoteka.txt", "r");
    if (fp==NULL)
        return -1;
    funkcija(fp);
    return 0;
}
