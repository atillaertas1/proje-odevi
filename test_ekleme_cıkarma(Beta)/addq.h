#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define enfazla_uzunluk 1000

char* dosya_adı[100];
char soru[300];
char sık[300];

void soru_dosyası_olustur() {

	FILE* dosya;
	
	char gecicidosyadadı[]="yemek        ";
	
	//*ad = *strcat(ad,".txt");
	printf("%s",strcat(gecicidosyadadı,".txt"));
	//dosya = fopen(,"w");
	
	




}
void test_ekle(char tur) {

	
int soru_sayisi;

system("cls");
printf("DıKKAT Her sorunun 4 sikki olmak zorundadir\n");
printf("%c. turdeki testiniz kac sorudan olusacak?\n",tur);
scanf("%d",&soru_sayisi);


printf("Test adini girinizz...\n");
scanf("%s",&dosya_adı);



for (char i = 0; i <soru_sayisi ; i++)
{
	
		printf("Lutfen %c . sorunuzu giriniz\n",(i+1));
		scanf("%s",&soru);
	//	fprintf(soru_dosyası_olustur(*dosya_adı),"%s\n",soru);
		soru_dosyası_olustur();

	
		
	for (char j = 0; j < 4; j++)
	{
		printf("%c. sorunun %c . sıkkini giriniz",(i+1),(j+1));
		scanf("%s", &sık);
		//fprintf(soru_dosyası_olustur(*dosya_adı),"%s",sık);
		


	}

}




}


void test_turusec() {

	char eklenecek_tur=0;
	
	FILE *turler;
	

	turler = fopen("turler.txt","r");

	char satır[enfazla_uzunluk];

	if (turler == NULL)
	{
		perror("Dosya bulunamadi");
		exit(1);
	}
	
	
		while (fgets(satır,enfazla_uzunluk,turler))
		{
			printf("%s",satır);
			

		}
printf("\nYukaridaki turler arasindan hangisine test ekelmek istersiniz(1-2-3...)\n");

scanf("%s",&eklenecek_tur);	
			
		
	


	switch (eklenecek_tur)
	{
	case '1': {
		test_ekle(eklenecek_tur);
		
	
	
	
	}
	case '2':

	default:printf("Gecerli bir deger giriniz");

		break;
	}


}
