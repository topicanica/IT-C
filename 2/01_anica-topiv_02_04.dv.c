#include <stdio.h>
funkcija(unsigned int n){
    unsigned int brojac = 0;
    while (n)
    {
        brojac += n&1;
        n>>=1;
    }
    return brojac;
}

int main (void){
    int i;

    scanf("%d",&i);
    printf("broj jedinica je:%d",funkcija(i));
    return 0;
}
