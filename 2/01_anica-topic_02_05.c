#include<stdio.h>
int max_jedinica(int broj)
{
    int najveci=0, brojac=0;
    while (broj!=0)
    {
        if (broj&1==1){
            brojac+=1;
        }
        else {
            if (brojac>najveci)
                najveci=brojac;
            brojac=0;
        }
        broj>>=1;
    }
    return najveci;
}
int main(void){
int broj=705510;
printf("broj %d ima najvise %d susjednih jedinica",broj,max_jedinica(broj));
return 0;
}
