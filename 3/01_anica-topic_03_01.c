#include <stdio.h>
int fun1 (int b)
{
    return (b%2!=0) ? 3*b+1 : b/2;
}

int fun2 (int b)
{
    while (b!=1)
    {
        b=fun1(b);
        printf("%d\n",fun1(b));

    }
    return 0;
}
int main (void)
{
    int b;
    printf("unesite broj:");
    scanf("%d", &b);
    fun2(b);
    return 0;
}
