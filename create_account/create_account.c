#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"
#include "functions.h"


int create_account()
{   
    char username2[50];
    char password2[50];
    char username1[50];
    char password1[50];
    char kullanici_ad[50];
    char sifre[50];
    int username_comparing;
    int password_comparing;
    
    
    //hesap olusturma 
    FILE *username;     //username.txt dosyasi baslangic
    FILE *password;     //password.txt dosyasi baslangic  
    password = fopen("password.txt","w");
    username = fopen("username.txt","w");
    
    printf(">#Yeni Hesap Oluştur#");
    bosluk();
    printf("Kullanici adi giriniz(Lutfen bosluk birakmadan yaziniz!):");
    bosluk();
    scanf("%s",&*account.username); //kullanici adi alinir
    printf("Sifrenizi giriniz(Lutfen bosluk birakmadan yazininiz!):");
    bosluk();
    scanf("%s",&*account.password); //sifre alinir
    
    fprintf(username,"%s",account.username); //kullanici adi username.txt dosyasina yazdirilir
    fprintf(password,"%s",account.password); //sifre password.txt dosyasina yazdirilir
    fclose(username); //username.txt dosyasi kapanis
    fclose(password); //password.txt dosyasi kapanis
    
    //hesap kontrol kismi
    
    FILE *username_control; //usarname_control acilis
    
    if((username_control = fopen("username.txt","r")) != NULL)  //username.txt dosyasi okunur
    {
        fscanf(username_control,"%s",&*username1);  //username.txt dosyasindaki sonuc username1'e atanir
    }
    else
    {
        printf("xxxxxxxxxxxxxxx");
    }
    
    fclose(username_control); //usarname_control kapanis
    
    
    FILE *password_control; //password_control kapanis
    
    if((password_control = fopen("password.txt","r")) != NULL) //password.txt dosyasi okunur
    {
        fscanf(password_control,"%s",&*password1); //password.txt dosyasindaki sonuc password1'e atanir
    }
    else
    {
        printf("xxxxxxxxxxxxxxxxxx");
    }
    
    fclose(password_control); //password_control kapanis
    
    //printf("%s",username1);
    //printf("%s",account.username);
    //printf("%s",password1);
    //printf("%s",account.password);
    
    system("clear");
    
    //kullaniciadi-sifre giris kismi
    //kullanicidan kullanici-adi ve sifre alinir eger eslesiyorsa giris yapmasina izin verilir
    
    printf(">#Hesaba Giris#");
    printf("Kullanici adi\n");
    scanf("%s",&*kullanici_ad);
    printf("Sifre\n");
    scanf("%s",&*sifre);
    
    
    
    username_comparing = strcmp(username1,kullanici_ad);    //usarname1 ile kullanici_ad karsilastirir eger ikisi de ayni ise 0 döndürür
    password_comparing = strcmp(password1,sifre);           //password1 ile sifre karsilastirir eger ikisi de ayni ise 0 döndürür
    
    if(username_comparing == 0 && password_comparing == 0)  //eger kullanici adlari ve sifreler eslesirse ekrana giris basarili bastirir
    {
        printf("GIRIS BASARILI");
        return 1;
    }
    else
    {
        printf("GIRIS BASARISIZ!"); //kullanici adlari ile sifreler eslesmezse ekrana giris basarisiz bastirir
        return 0;
    }
 }   
    
    
    

