#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 
#include <string.h>


#define enfazla_uzunluk 1000

char dosya_adı[100];
char soru[1000];
char sık[1000];
int soru_sayisi;


FILE* soru_dosyası_olustur(char* dosyauznatısı) {

			FILE* dosya;
			dosya = fopen(strcat(dosyauznatısı,".txt"),"w");


			return dosya;
			/*
			*  Dosya oluşturup geri yolluyorum
			
			*/
	
	
		




}
void test_ekle(int tur) {
	

system("cls");//konsolu temizledim

printf("DıKKAT Her sorunun 4 sikki olmak zorundadir\n");//malum

		printf("Test adini girinizz...\n");
		scanf("%s",&dosya_adı)//EN TEPEDE BELİRTTİGİM DİZİYE AKTARIYORUM
		/* BURADA TEST ADINI GİRMESİNİ İSTİYORUM CALİSİYOR ANCAK BOSLUKLU YAZAMIYORUZ
		* İLK HATA VEYA DUZELTİLMESİ GEREKEN YER BURASI
		
		*/
		//fgets(dosya_adı,sizeof(dosya_adı),stdin);
		;

printf("%d. turdeki testiniz kac sorudan olusacak?\n",tur);
scanf("%d",&soru_sayisi);
/*
Soru sayısını girdiriyoruz calisiyor bi sıkıntısı yok

*/





FILE* gecicdosya;
gecicdosya = soru_dosyası_olustur(dosya_adı);

/*
soru dosyası olustur fonksiyonumla gecici bir dosya olusturuyorum(bu dosya herzaman farklı test
icin kullanacagndan dolayı adı gecici)

*/

for (int i =0; i <soru_sayisi ; i++)
{
		

			printf("sorunuzu giriniz");
		    fgets(soru, sizeof(soru), stdin);
			fprintf(gecicdosya, "%s",soru);
			/*
			*  soru girmesini istiyorum BURAYI ATLIYOR
			
			*/
		
			
		
	for (int j = 0; j < 4; j++)
	{

		printf("%c . sorunun %c . sıkkini giriniz",i+1,j+1);
		fgets(sık, sizeof(sık),stdin);
		fprintf(gecicdosya, "%s",sık);
		/* BURALARDA SIKINTI YOK BOSLUKLU YAZABİLİYORSUN
		
		*/
		
		
		
	

	}
			
			
	

	
	
		fclose(gecicdosya);
}





}


void test_turusec() {

	//burada test eklemek istedigi test turunu sececek
	
	


	int eklenecek_tur;
	FILE *turler;
	turler = fopen("turler.txt","r");//onceden olusturdugum turler dosyasındaki metinleri cekiyorum
	char satır[enfazla_uzunluk];
	if (turler == NULL)//bossa hata ver
	{
		perror("Dosya bulunamadi");
		exit(1);
	}
	
	
		while (fgets(satır,enfazla_uzunluk,turler))
		{
			printf("%s",satır);
			

		}
		printf("\nYukaridaki turler arasindan hangisine test ekelmek istersiniz(1-2-3...)\n");
		scanf("%d",&eklenecek_tur);	//turler ekrana yazılır ve kullanıcı ekleme istedigi turu secer
			
	
	

	switch (eklenecek_tur)
	{
	case 1: {

		test_ekle(eklenecek_tur); break;//1.yi sectigini varsaydık ve test_ekle fonksiyonunu cagırdım
		//parametre olarak turu yolladım
		
	
	
	
	}
	case 2: break;

	default:printf("Gecerli bir deger giriniz");

		break;
	}


}
