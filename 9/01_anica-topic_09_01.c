#include<stdio.h>

typedef struct
{
int sati;
int minute;
int sekunde;
}vrime;

int funkcija(vrime a,vrime b){
int c;
if(a.sati>b.sati){
    c+=(a.sati-b.sati)*3600;
c+=(a.minute-b.minute)*60;
    c+=(a.sekunde-b.sekunde);}
else
{c+= (b.sati-a.sati)*3600;
c+=(b.minute-a.minute)*60;
 c+= (b.sekunde-a.sekunde);}
return c;
}
void funkcija_za_print(int c){
printf("%d:",c/3600);
c=c%3600;
printf("%d:",c/60);
c=c%60;
printf("%d\n", c);
}

int main(){
vrime prvaura,drugaura;
prvaura.sati=1;drugaura.sati=8;
prvaura.minute=1;drugaura.minute=8;
prvaura.sekunde=1;drugaura.sekunde=8;
int a= funkcija(prvaura,drugaura);
funkcija_za_print(a);
return 0;
}
