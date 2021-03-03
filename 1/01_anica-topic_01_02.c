#include<stdio.h>
int funkcija(int stari){
    int novi=0;
    while (stari!=0){
            novi*=10;
        novi+=(stari%10);
        stari-=(stari%10);
        stari%=10;
    }
    return novi;
}
int main(void){
int n,i;
printf("unesite zeljeni broj:\n");
scanf("%d", &n);
    for(i=0;i<n;i++){
        if((funkcija(i)%2)==0)
            printf(" %d",i);
}
}

