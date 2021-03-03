#include <stdio.h>
int funkcija(int a){
    if ((a%4==0)&&(a%100!=0))
        printf("prijestupna");
    else if (a%400==0)
        printf("prijestupna");
    else
        printf("nije prijestupna");
    return 0;
}


int main(void){
    int a;
    printf("unesi godinu\n");
    scanf("%d",&a);
    funkcija(a);
}
