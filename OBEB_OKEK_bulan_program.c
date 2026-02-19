#include <stdio.h>

int main (void){
	int sayi1,sayi2,i;
	int en_kucuk_sayi,OBEB,OKEK;
	printf("Iki tane sayi giriniz= ");
	scanf("%d %d",&sayi1,&sayi2);
	if(sayi1<sayi2){
		en_kucuk_sayi=sayi1;
	}
	else{
		en_kucuk_sayi=sayi2;
	}
	for(i=2;i<=en_kucuk_sayi;i++){
		if(sayi1%i==0 && sayi2%i==0){
			OBEB=i;
		}
	}
	if(OBEB!=0){
		OKEK=OBEB*sayi1/OBEB*sayi2/OBEB;
		printf("%d ve %d sayilarinin OKEK'i= %d\n",sayi1,sayi2,OKEK);
		printf("%d ve %d sayilarinin OBEB'i= %d",sayi1,sayi2,OBEB);
	}else{
		OKEK=sayi1*sayi2;
		printf("%d ve %d sayilarinin OKEK'i= %d\n",sayi1,sayi2,OKEK);
		printf("Bu sayilarin OBEB'i 1'dir");
	}
	return 0;
}
