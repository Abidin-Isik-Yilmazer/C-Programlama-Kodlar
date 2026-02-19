#include <stdio.h>

int main (void){
	int satir,i,j,k,sayi;
	sayi=1;
	printf("Satir sayisini giriniz= ");
	scanf("%d",&satir);
	if(satir<=0){
		printf("Yanlis giris yaptiniz!");
		return 0;
	}
	for(i=0;i<satir;i++){
		for(k=satir;k>i;k--){
			printf("  ");
		}
		for(j=0;j<=i;j++){
			if(j==0 || i==0)
			 sayi=1;
			else
			 sayi=sayi*(i-j+1)/j;
			printf("%4d",sayi);
		}
		printf("\n");
	}
	return 0;
}
