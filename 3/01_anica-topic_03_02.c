#include <stdio.h>

int iter_fun (int m)
{
    int i,sum=1;
    for (i=1;i<=m;i++)
    {
        sum=sum* (2*i-1);
    }
    return sum;
}
int rek_fun(int m)
{
    if(m!=1)
    {
        return (2*m-1)*rek_fun(m-1);
    }
    return m;
}
int main(void)
{
    int broj;
    printf("unesite broj: ");
    scanf("%d",&broj);
    printf("umnozak je %d (iter)\n",iter_fun(broj));
    printf("umnozak je %d (rek)\n",rek_fun(broj));
    return 0;

}
