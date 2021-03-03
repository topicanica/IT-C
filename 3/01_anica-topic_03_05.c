#include<stdio.h>
int prost(int broj)
{
    int i;
    int brojac=0;
    for (i==2;i<broj;i++)
    {
        if (broj%i==0)
        brojac+=1;
    }
    if (brojac>2)
        return 0;
    else
        return 1;
}
int rek (int n, int k)
{
    if (k==0)
        return 0;
    else if ((prost(n)))
        return n+(n+1,k-1);
    else
        return 0+(n+1,k);
}

int main()
{
    int k;
    scanf("%d",&k);
    printf("%d",rek(2,k));
    return 0;
}
