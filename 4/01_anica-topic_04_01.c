#include <stdio.h>

void sum_i_p(int n, int *s, int *p)
{

    int i,sum=0;
    int produkt=1;

    for (i=1;i<=n;++i)
    {
        sum+=i*i;
        produkt*=i*i;
    }
    *s=sum;
    *p=produkt;
}

 int main (void)
 {
     int s=0;
     int p=1;
     int broj;
     printf("unesite broj: ");
     scanf ("%d", &broj);
     sum_i_p(broj,&s,&p);
     printf("suma je: %d ",s);
     printf("produkt je: %d ",p);
     return 0;
 }
