#include<stdio.h>
#include<stdlib.h>
#include"addq.h"
#include <locale.h>


#define tane 3
#define uzunluk 15

void yaz(char* ad)
{
	printf("%s",ad);

}

int main() {
		setlocale(LC_ALL, "Turkish");
	
	
	char secilen;
	printf("test turu seciniz(1,2,3)\n");
	scanf("%c",&secilen);

	/*  BURADA  NE YAPMAK ÝSTEDÝGÝNÝ SECECEK KULLANICI
	* 1. YEMEK TURUYSE YEMEK TESTÝNE GÝDECEK.(LÝSTESÝNE)
	* 2. ARBA TURUYSE ARABA TESTÝNE GÝDECEK.(LÝSTESÝNE)
	* 3. ÝSE TEST EKLEME
	* system("cls") ekraný temizler..
	
	
	
	
	*/

	switch (secilen)
	{
	case '1': { system("cls"); printf("1. turu sectiniz\n"); break;
	}
	case '2': {system("cls"); printf("2. turu sectiniz\n"); break;}
	case'3': { test_turusec(); break;}//test_turusec fonksiyonunu cagirdik.
	
		  


	default:printf("gecerli bir deger girin");break;
		
	}





	


	return 0;

}