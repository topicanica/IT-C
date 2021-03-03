#include<stdio.h>
#include<string.h>
#include<ctype.h>

void modificiraj(char str[],int duljina)
{
    int i, j = 0;
    for(i=0; i<duljina; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            for(j = i; j < duljina; j++)
                {
                    str[j] = str[j+1];
                }
        }
    }

    puts(str);
}
int main(void)
{
    int duljina;
    char str[]="Popokatepetl";
    duljina=strlen(str);
    modificiraj(str,duljina);
    return 0;
}

