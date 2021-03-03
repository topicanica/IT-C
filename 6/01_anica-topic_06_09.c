#include<stdio.h>
#include<ctype.h>
#include<string.h>

int provjeri(char *str1,char *str2)
{
    int brojac;
    int i,j,duljina=strlen(str1);
    for (i=duljina-2;i<duljina;i++)
    {
        if(str1[i]!=str2[j++])
            return 0;
        else brojac++;
            return brojac;
    }

}

int main(void)
{
    char str1[]="popovoliaan";
    char str2[]="anuvolipopo";
    if ((provjeri(str1,str2))!=0)
        printf("Zadnja dva slova prvog stringa su jednaka prva dva");
    else
        printf("zadnja dva slova prvog stringa nisu jednaka pocetku drugog stringa");
    return 0;

}
