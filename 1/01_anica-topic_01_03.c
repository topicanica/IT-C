#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int broji_znamenke(int b)
{
    int brojac;
    while(!b)
    {
        brojac++
        b=/10;
    }
}
int zadnja_znamenka(int b)
{
    return / pow(10,broji_znamenke(b)-1);
}
int main (void)
{
    int b;
    printf("unesite broj: ");
    scanf("%d",&b);
    printf("prva znamenka je: %d",zadnja_znamenka(b));
    return 0;
}
