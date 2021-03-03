#include<stdio.h>
#include<string.h>
 typedef struct{
 int a;
 int b;
 int c;
 }kvadar;

 void funkcja(kvadar *najv, kvadar *najm, kvadar arr[])
 {
     int i;
     kvadar najveci,najmanji;
     najveci=arr[0];
     najmanji=arr[0];
     for (i=1;i<(sizeof(arr)/sizeof(kvadar));i++){
        if((arr[i].a*arr[i].b*arr[i].c)<(najmanji.a*najmanji.b*najmanji.c))
        {
           najmanji.a = arr[i].a;
           najmanji.b = arr[i].b;
           najmanji.c = arr[i].c;
        }
        if((arr[i].a*arr[i].b*arr[i].c)>(najveci.a*najveci.b*najveci.c))
        {
           najveci.a = arr[i].a;
           najveci.b = arr[i].b;
           najveci.c = arr[i].c;
        }
     }
     *najv=najveci;
     *najm=najmanji;
 }

 int main()
{
    kvadar ante,mate,kedzo;
     ante.a=1;ante.b=2;ante.c=3;
     mate.a=2;mate.b=3;mate.c=4;
     kedzo.a=3;kedzo.b=4;kedzo.c=5;
    kvadar arr[3]={ante,mate,kedzo};
     kvadar najveci,najmanji;
     funkcja(&najveci,&najmanji,arr);
     printf("najmanjem je volumen %d a najvecem %d",najmanji.a*najmanji.b*najmanji.c,najveci.a*najveci.b*najveci.c);
     return 0 ;

}
