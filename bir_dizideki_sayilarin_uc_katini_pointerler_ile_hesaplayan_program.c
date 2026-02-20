#include <stdio.h>

void uc_kati (int* sayilar);

int i;

int main (void){
	int sayilar[5]={12,3,2,-3,7};
	printf("dizinin onceki hali=\n");
	for(i=0;i<5;i++){
		printf("sayilar[%d]= %d\n",i,sayilar[i]);
	}
	uc_kati(sayilar);
	printf("\ndizinin sonraki hali=\n");
	for(i=0;i<5;i++){
		printf("sayilar[%d]= %d\n",i,sayilar[i]);
	}
	return 0;
}

void uc_kati (int* sayilar){
	for(i=0;i<5;i++){
		*(sayilar+i)*=3;
	}
}
