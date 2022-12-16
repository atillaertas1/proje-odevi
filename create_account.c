#include <stdio.h>
#include "struct.h"
#include "functions.h"
#include<string.h>


int main()
{   
    char username2[50];
    char password2[50];
    char username1[50];
    char password1[50];
    int username_comparing;
    int password_comparing;
    //hesap oluşturma 
    FILE *username;
    FILE *password;
    password = fopen("password.txt","w");
    username = fopen("username.txt","w");
    
    printf(">#Yeni Hesap Oluştur#");
    bosluk();
    printf("Kullanici adi giriniz(Lutfen bosluk birakmadan yaziniz!):");
    bosluk();
    scanf("%s",&*account.username);
    printf("Sifrenizi giriniz(Lutfen bosluk birakmadan yazininiz!):");
    bosluk();
    scanf("%s",&*account.password);
    
    fprintf(username,"%s",account.username);
    fprintf(password,"%s",account.password);
    fclose(username);
    fclose(password);
    
    //hesap kontrol kısmı
    
    FILE *username_control;
    
    if((username_control = fopen("username.txt","r")) != NULL)
    {
        fscanf(username_control,"%s",&*username1);
    }
    else
    {
        printf("xxxxxxxxxxxxxxx");
    }
    
    fclose(username_control);
    
    FILE *password_control;
    
    if((password_control = fopen("password.txt","r")) != NULL)
    {
        fscanf(password_control,"%s",&*password1);
    }
    else
    {
        printf("xxxxxxxxxxxxxxxxxx");
    }
    
    fclose(password_control);
    
    printf("%s",username1);
    printf("%s",account.username);
    printf("%s",password1);
    printf("%s",account.password);
    
    
    username_comparing = strcmp(username1,account.username);
    password_comparing = strcmp(password1,account.password);
    
    if(username_comparing == 0 && password_comparing == 0)
    {
        printf("GIRIS BASARILI");
    }
    else
    {
        printf("GIRIS BASARISIZ");
    }    
    
    
    
 }
