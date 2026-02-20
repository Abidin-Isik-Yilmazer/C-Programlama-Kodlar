#include <stdio.h>

int main (void){
	int sayi;
	int i,j,k;
	int deger;
	char harf;
	harf='A';
	deger=1;
	printf("Bir sayi giriniz= ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
		for(k=sayi;k>=i;k--){
			printf("  ");
		}
		for(j=0;j<=i;j++){
			if(i==0 || j==0)
			 deger=1;
			else
			 deger=deger*(i-j+1)/j;
			harf='A'+(deger-1)%26;
			printf("%4c",harf);
		}
		printf("\n");
	}
	return 0;
}
