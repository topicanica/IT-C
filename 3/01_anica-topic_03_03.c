#include <stdio.h>
void rek (int n,int k)
{
    if (n==0)
        return;
    else{
        rek((n-(n%k))/k,k);

        if(n%k==10)
            printf("A");
        else if(n%k==11)
            printf("B");
        else if(n%k==12)
            printf("C");
        else if(n%k==13)
            printf("D");
        else if(n%k==14)
            printf("E");
        else if(n%k==15)
            printf("F");
        else printf("%d",n%k);

    }

    return ;
}
int main (void)
{
    int n,k;
    scanf("%d %d",&n,&k);
    rek(n,k);
    return 0;

}
