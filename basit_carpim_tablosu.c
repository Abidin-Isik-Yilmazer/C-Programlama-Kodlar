#include <stdio.h>

int main (void){
	int sayi,i=0;
	printf("0 ile 10 arasinda bir sayi giriniz= ");
	scanf("%d",&sayi);
	if(sayi<0 || sayi>10)
	 printf("Yanlis giris yaptiniz!");
	else{
		while(i<=10){
			printf("%d x %2d = %d\n",sayi,i,sayi*i);
			i++;
		}
	}
	return 0;
}
