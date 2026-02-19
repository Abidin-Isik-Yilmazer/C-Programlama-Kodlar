#include <stdio.h>

int main (void){
	char karakter;
	printf("Bir karakter giriniz= ");
	scanf("%c",&karakter);
	if((karakter>='A') && (karakter<='Z'))
	 printf("%c karakteri buyuk harftir.",karakter);
	else if((karakter>='a') && (karakter<='z'))
	 printf("%c karakteri kucuk harftir.",karakter);
	else
	 printf("%c karakteri harf degildir.",karakter);
	return 0;
}
