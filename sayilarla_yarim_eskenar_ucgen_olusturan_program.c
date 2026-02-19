#include <stdio.h>

int main (void){
	int sayi,i,j;
	printf("Bir sayi giriniz= ");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=sayi;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

