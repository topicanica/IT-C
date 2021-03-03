#include <stdio.h>
#include <ctype.h>
int funkcija(char a){
    int s;
if (isdigit(a)) s=1;
else if (isupper(a)) s=2;
else if (islower(a)) s=3;
else s=4;
return s;
}

int main (void){
    char a;
    while (a!='.')
{
    scanf("%c", &a);

        switch (funkcija(a))
        {
        case 1:printf("%c\n",a); break;
        case 2:printf("%c\n",a); break;
        case 3:printf("%c\n",toupper(a)); break;
        case 4:break;
        }
}
return 0;
}
