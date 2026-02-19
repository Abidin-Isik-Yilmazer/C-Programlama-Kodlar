#include <stdio.h>
#include <math.h>

void menu (void);
int en_kucuk (int sayi1,int sayi2);
int en_buyuk (int sayi1,int sayi2);
int kare (int sayi1);
int kup (int sayi1);
int mutlak (int sayi1);

int main (void){
	int secim;
	int sayi1,sayi2;
	menu();
	printf("Yapmak istediginiz islemi seciniz= ");
	scanf("%d",&secim);
	switch(secim){
		case 1:printf("Iki adet sayi giriniz= ");
		       scanf("%d%d",&sayi1,&sayi2);
		       printf("En kucuk sayi= %d",en_kucuk(sayi1,sayi2));
		       break;
		case 2:printf("Iki adet sayi giriniz= ");
		       scanf("%d%d",&sayi1,&sayi2);
		       printf("En buyuk sayi= %d",en_buyuk(sayi1,sayi2));
		       break;
		case 3:printf("Sayi giriniz= ");
		       scanf("%d",&sayi1);
		       printf("%d sayisinin karesi= %d",sayi1,kare(sayi1));
		       break;
		case 4:printf("Sayi giriniz= ");
		       scanf("%d",&sayi1);
		       printf("%d sayisinin kupu= %d",sayi1,kup(sayi1));
		       break;
		case 5:printf("Sayi giriniz= ");
		       scanf("%d",&sayi1);
		       printf("%d sayisinin mutlak degeri= %d",sayi1,mutlak(sayi1));
		       break;
		default:printf("Yanlis secim yaptiniz!");
	}
	return 0;
}

void menu (void){
	printf("1.)En kucuk deger\n");
	printf("2.)En buyuk deger\n");
	printf("3.)Kare\n");
	printf("4.)Kup\n");
	printf("5.)Mutlak deger\n\n");
}

int en_kucuk (int sayi1,int sayi2){
	int en_kucuk_sayi;
	if(sayi1<sayi2)
	 en_kucuk_sayi=sayi1;
	else
	 en_kucuk_sayi=sayi2;
	return en_kucuk_sayi;
}

int en_buyuk (int sayi1,int sayi2){
	int en_buyuk_sayi;
	if(sayi1>sayi2)
	 en_buyuk_sayi=sayi1;
	else
	 en_buyuk_sayi=sayi2;
	return en_buyuk_sayi;
}

int kare (sayi1){
	return pow(sayi1,2.0);
}

int kup (sayi1){
	return pow(sayi1,3.0);
}

int mutlak (sayi1){
	if(sayi1<0)
	 return (sayi1*-1);
	else
	 return sayi1;
}

