#include<stdio.h>
#include<ctype.h>
#include<string.h>

int najveci_string(FILE *fp)
{
    char str[1024];
    int strmax=strlen(fgets(str,1024,fp));
    while(fgets(str,1024,fp)!= NULL)
    {
        if (strmax<strlen(str))
            strmax=strlen(str);
    }
    return strmax;
}
int main (void)
{
    FILE *fp;
    fp=fopen("test.txt","r");
    if (fp==NULL)
        return 1;
    printf("duljina najduzeg stringa je %d ",najveci_string(fp));
    fclose(fp);
    return 0;

}
