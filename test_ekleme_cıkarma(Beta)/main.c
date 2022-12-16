#include<stdio.h>
#include<stdlib.h>
#include"addq.h"


#define tane 3
#define uzunluk 15

void yaz(char* ad)
{
	printf("%s",ad);

}

int main() {




#pragma region Dosya acma
  /*  FILE* dosya;
	dosya =fopen("C:\\Users\\Emrecan\\Desktop\\yeni.txt","w");*/
#pragma endregion

#pragma region Veri yazma islemi

	//FILE *dosya0;

	//dosya0 = fopen("C:\\Users\\Emrecan\\Desktop\\yazdirma.txt","w");

	////putc("adsadsad",dosya0);
	////putc(veri,hangidosya)
	////putc("\n",dosya0);
	//fprintf(dosya0,"%s","Emrecan Gok");
	//fclose(dosya0);
	////dosyadaki okuma islemini kapatýr



#pragma endregion

#pragma region okuma

	/*FILE* dosya1;
	dosya1 = fopen("C:\\Users\\Emrecan\\Desktop\\yazdirma.txt", "r");*/

#pragma endregion

	

	char secilen;
	printf("test turu seciniz(1,2,3)\n");
	scanf("%c",&secilen);

	switch (secilen)
	{
	case '1': { system("cls"); printf("1. turu sectiniz\n"); break;
	}
	case '2': {system("cls"); printf("2. turu sectiniz\n"); break;}
	case'3': { test_turusec(); break;}
	



	default:printf("gecerli bir deger girin");break;
		
	}





	


	return 0;

}