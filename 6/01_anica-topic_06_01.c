#include<stdio.h>
#include<string.h>
#include<ctype.h>
void brojac(char str[],int duljina, int *s,int *b)
{
    int i;
    *b=0;
    *s=0;
    int brojacb,brojacsl=0;
    for(i=0;i<duljina;i++)
    {
        if (isalpha(str[i]))
            *s+=1;
        else if (isdigit(str[i]))
            *b+=1;
        else
            continue;
    }
}
int main(void)
{
    int brojacb,brojacsl;
    int duljina;
    char str[]="78odns44562656";
    duljina= strlen(str);
    brojac(str,duljina,&brojacsl,&brojacb);
    printf("broj slova je %d\n",brojacsl);
    printf("broj brojeva je %d",brojacb);
    return 0;

}
