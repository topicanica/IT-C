#include<limits.h>
#include<stdio.h>
#define OPLOSJE 6*(a*a)

int racunaj(int a)
{
    int op=OPLOSJE;
    return op;
}
int main(void)
{
    int broj_kocaka,i,stranica,najveci=INT_MIN,najmanji=INT_MAX;
    printf("unesite broj kocaka:\n");
    scanf("%d",&broj_kocaka);
    for (i=0;i<broj_kocaka;i++)
    {

        printf("unesite stranicu:\n");
        scanf("%d",&stranica);
        int f=racunaj(stranica);
        if (f>najveci)
            najveci=f;
        if (f<najmanji)
            najmanji=f;

    }
    printf("najveci:%d, najmanji:%d",najveci,najmanji);
    return 0;
}
