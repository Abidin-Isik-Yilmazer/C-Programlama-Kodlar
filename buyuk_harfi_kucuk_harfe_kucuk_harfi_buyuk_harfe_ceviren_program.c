#include <stdio.h>

void buyukten_kucuge (char* cumle);

void kucukten_buyuge (char* cumle);

int main (void){
	char cumle[100];
	int secim;
	puts("1.)Buyuk harften kucuk harfe cevirme");
	puts("2.)Kucuk harften buyuk harfe cevirme");
	puts("\nSeciminizi yapin= ");
	scanf("%d",&secim);
	getchar();
	switch(secim){
		case 1:puts("Bir cumle giriniz= ");
		       gets(cumle);
		       buyukten_kucuge(cumle);
		       break;
		case 2:puts("Bir cumle giriniz= ");
		       gets(cumle);
		       kucukten_buyuge(cumle);
		       break;
		default:puts("Yanlis secim yaptiniz!");
	}
	return 0;
}

void buyukten_kucuge (char* cumle){
	int i;
	for(i=0;*(cumle+i)!='\0';i++){
		if(*(cumle+i)>='A' && *(cumle+i)<='Z')
		 putchar(cumle[i]+32);
		else 
		 putchar(cumle[i]);
	}
}

void kucukten_buyuge (char* cumle){
	int i;
	for(i=0;*(cumle+i)!='\0';i++){
		if(*(cumle+i)>='a' && *(cumle+i)<='z'){
			putchar(cumle[i]-32);
		}
		else{
			putchar(cumle[i]);
		}
	}
}
