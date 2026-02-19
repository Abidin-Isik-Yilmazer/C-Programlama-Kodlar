#include <stdio.h>

int main (void){
	int sayi,sayac,toplam;
	sayac=0;
	toplam=0;
	printf("Kaca kadar sayilar toplanacak= ");
	scanf("%d",&sayi);
	while(sayac<sayi){
		sayac+=1;
		toplam+=sayac;
	}
	printf("1'den %d e kadar olan sayilarin toplami= %d",sayi,toplam);
	return 0;
}
