#include <stdio.h>

int main (void){
	int sayi,i;
	i=2;
	printf("Pozitif bir sayi giriniz= ");
	scanf("%d",&sayi);
	if(sayi<0){
		printf("Yanlis giris yaptiniz!");
		return 0;
	}
	while(i<=sayi/2){
		if(sayi%i==0){
			printf("%d sayisi asal degildir.",sayi);
			return 0;
		}
		i++;
	}
	printf("%d sayisi asal sayidir.",sayi);
	return 0;
}

