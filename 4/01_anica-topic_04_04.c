#include<stdio.h>
void pros_vrijed(int a[10],float *p,float *n)
{
    int i;
    float sum_poz=0,sum_neg=0, brojacp=0, brojacn=0;

    for (i=0;i<10;i++)
    {
        if (a[i]>=0)
        {
            a[i]+=sum_poz;
            brojacp++;
        }
        else
        {
            a[i]+=sum_neg;
            brojacn++;
        }
    }
    sum_poz/=brojacp;
    sum_neg/=brojacn;
    *p=sum_poz;
    *n=sum_neg;
}
int main(void)
{
    int a[10]={4,7,9,-2,-5,-20,8,2,-3};
    int p=0,n=0;
    pros_vrijed(a,&p,&n);
    printf("prosjecna vrijednost negativnih je: %f, a prosjecna vrijednost pozitivnih je %f",p,n);

    return 0;

}
