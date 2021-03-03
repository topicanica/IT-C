#include<stdio.h>
#include<stdlib.h>

int najveci_nep_broj(int a[], int d)
{
    int i,najmanji=0;
    for (i=0;i<d;i++)
    {
        if (a[i]%2!=0)
        {
           najmanji=a[i] ;
           break;
        }
    }
    for (i=0;i<d;i++)
    {
        if (a[i]%2!=0)
        {
            if (a[i]>najmanji)
                najmanji=a[i];
        }
    }
    for (i=0;i<d;i++)
    {
        if (a[i]==najmanji)
        {
            return i;
        }
    }

}
int main(void)
{
    int d, *a,i;
    scanf("%d",&d);
    a = (int*)malloc(d*sizeof(int));
    for (i=0;i<d;i++)
    {
       printf("unesi %d.clan niza: ",i+1);
       scanf("%d",&a[i]);
       printf("\n");
    }
    printf("adresa prvog clana je %d a adresa najveceg neparnog broja je %d ", &a, &a+sizeof(int)*najveci_nep_broj(a,d));
    return 0;
    free(a);
}
