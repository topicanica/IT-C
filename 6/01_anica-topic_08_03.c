#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    FILE *fp;
    char a;
    int s=0;

    fp=fopen("pma1234.txt","r");
    if (fp==NULL)
    return 1;

    while((a=fgetc(fp))!=EOF)
    {
        if (isdigit(a))
            s+=a-'0';
    }
    fclose(fp);
    printf("%d",s);
    return 0;
}
