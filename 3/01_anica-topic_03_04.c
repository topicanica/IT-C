#include<stdio.h>
int rek(int a1, int d,int nj)
{
    if (nj==1)
        return a1;
    else
        return d+rek(a1,d,nj-1);
}
void main(){
int broj, udaljenost, koji_clan;
scanf("%d %d %d", &broj, &udaljenost, &koji_clan);
printf("%d\n", rek(broj, udaljenost,koji_clan));
printf("%d", broj+(koji_clan-1)*udaljenost);
}
