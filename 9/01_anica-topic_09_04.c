#include<stdio.h>
#include <string.h>
typedef struct
{
    char ime[1024], prezime[1024],ime_slike[1024],dimenzije[1024];
    unsigned cijena;
}slika;


int najcesci(slika *niz_slika, int n)
{
    int i,j,brojac1,brojac2=0;
    int indeks=0;
    for(i=0;i<n;i++)
    {
        brojac1=0;
        for(j=i+1;j<n;j++)
        {
            if((strcmp(niz_slika[i].ime,niz_slika[j].ime)==0)&&(strcmp(niz_slika[i].prezime,niz_slika[j].prezime)==0))
                brojac1++;
        }
        if (brojac1>brojac2)
        {
            indeks=i;
            brojac2=brojac1;
        }
    }
    return indeks;
}

int main(void)
{
    FILE *fp;
    slika niz_slika[1024];
    int i=0, najzastupljeniji;
    char str[10];

    fp = fopen("slike.txt", "r");
    if(fp == NULL)
        return -1;

    while(fgets(str, 100, fp) != NULL)
    {
        sscanf(str, "%s %s %s %s %u", niz_slika[i].ime, niz_slika[i].prezime, niz_slika[i].ime_slike, niz_slika[i].dimenzije, &niz_slika[i].cijena);
        i++;
    }

    najzastupljeniji = najcesci(niz_slika, 7);

    printf("Najzastupljeniji autor je: %s %s", niz_slika[najzastupljeniji].ime, niz_slika[najzastupljeniji].prezime);

    fclose(fp);
    return 0;
}


