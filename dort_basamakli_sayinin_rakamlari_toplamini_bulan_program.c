#include <stdio.h>

int main (void){
	int sayi;
	int birler,onlar,yuzler,binler;
	int toplam;
	printf("4 basamakli bir sayi giriniz= ");
	scanf("%d",&sayi);
	binler=sayi/1000;
	yuzler=(sayi%1000)/100;
	onlar=(sayi%100)/10;
	birler=sayi%10;
	toplam=binler+yuzler+onlar+birler;
	printf("Sayinin rakamlari toplami= %d dir.",toplam);
	return 0;
}
