#include<stdio.h>
#include<stdlib.h>

int sumiranje (int a[],float duzina)
{
    int i,sum=0;
    for (i=0;i<duzina;i++)
        sum+=a[i];
    return sum;
}
float prosjek_niza (int a[],float duzina)
{
    int suma;
    float prosjek;
    suma=sumiranje(a,duzina);
    prosjek=suma/duzina;
    return prosjek;
}
void prosjek_najveceg (int a[],int b[], float duzina1,float duzina2, float *prosjek_veceg)
{
    float prosjek_a,prosjek_b;
    prosjek_a=prosjek_niza(a,duzina1);
    prosjek_b=prosjek_niza(b,duzina2);
    if (prosjek_a>prosjek_b)
        *prosjek_veceg=prosjek_a;
    else
        *prosjek_veceg=prosjek_b;

}
int main()
{
    int a[6] = {4, 8, -12, -3, 14, 0};
    int b[3] = {7, 24, -3};
    float duzina1 = sizeof a/sizeof(int), duzina2 = sizeof b/sizeof(int), prosjek = 0;
    prosjek_najveceg(a,b,duzina1,duzina2,&prosjek);
    printf("Prosjek najveceg niza je %f\n", prosjek);
    return 0;
}
