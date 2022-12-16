#include <stdio.h>

int main()
{
    char soru[50][50];
    int i = 0;
    
    FILE *dosya;
    
    if((dosya = fopen("sorular.txt","r")) != NULL)
    {
        while(!feof(dosya))
        {
           fscanf(dosya,"%s",&*kelime[i]);
           printf("%s ",kelime[i]);
           i++;
        }
    }
    
    else
    {
        printf("Dosya bulunamadı!");
    }
    
    fclose(dosya);
}
