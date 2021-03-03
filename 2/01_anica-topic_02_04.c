#include<stdio.h>
brojilobitova(unsigned int broj){
    int brojac=0;
    while (broj!=0){
        if ((broj&1)==1)
            brojac++;
        broj=broj>>1;
    }
    return brojac;
}
int main (void){
    unsigned int broj;
    printf("unesite broj\n");
    scanf("%d",&broj);
    printf("broj jedinica je:%d",brojilobitova(broj));
    return 0;

}
