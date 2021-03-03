#include<stdio.h>
#include<ctype.h>
#include<string.h>

int funkcija(FILE *fp)
{
    char n;
    int s = 0;

    while ((n=fgetc(fp)) !=EOF)
    {
        if (isdigit(n))
            s+=n-'0';
    }
    printf("%d\n",s);
}
int main (void)
{
    FILE *fp;
    fp=fopen("pma1234.txt","r");
    if (fp==NULL)
        return 1;
    funkcija(fp);
    fclose(fp);
    return 0;

}
