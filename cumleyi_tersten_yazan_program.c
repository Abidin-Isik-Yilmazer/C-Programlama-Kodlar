#include <stdio.h>

void tersten_yazdirma (char* cumle);

int main (void){
	char cumle[100];
	printf("Bir cumle giriniz= ");
	gets(cumle);
	tersten_yazdirma(cumle);
	return 0;
}

void tersten_yazdirma (char* cumle){
	int i,uzunluk;
	uzunluk=strlen(cumle);
	for(i=uzunluk-1;i>=0;i--){
		printf("%c",cumle[i]);
	}
}
