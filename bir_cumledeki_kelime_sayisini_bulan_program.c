#include <stdio.h>

int kelime_sayisi (char* cumle);

int main (void){
	char cumle[100];
	puts("Bir cumle giriniz= ");
	gets(cumle);
	kelime_sayisi(cumle);
	printf("\"%s\" cumlesindeki kelime sayisi= %d",cumle,kelime_sayisi(cumle));
	return 0;
}

int kelime_sayisi (char* cumle){
	int i,kelime_sayisi;
	kelime_sayisi=0;
	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i]==' '){
			kelime_sayisi++;
		}
	}
	return kelime_sayisi+1;
}
