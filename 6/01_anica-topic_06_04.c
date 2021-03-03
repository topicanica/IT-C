#include<stdio.h>
#include<string.h>
#include<ctype.h>

int provjeri(char* str,char slovo)
{
    int br=0,i;
    for (i=0;i<strlen(str);i++)
        if(str[i]==slovo && ++br==2) return i+1;
    return -1;
}

int main(void)
{
    char str[]="ONoffON";
    char slovo;
    puts("unesite slovo");
    scanf("%c",&slovo);
    int pojavljivanje=provjeri(str,slovo);
    printf("pozicija drugog je: %d",pojavljivanje);
    return 0;
}
