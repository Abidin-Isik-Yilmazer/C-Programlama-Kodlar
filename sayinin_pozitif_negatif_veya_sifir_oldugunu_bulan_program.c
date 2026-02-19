#include <stdio.h>

int main (void){
	int sayi;
	printf("Bir sayi giriniz= ");
	scanf("%d",&sayi);
	if(sayi>0)
	 printf("%d sayisi pozitiftir.",sayi);
	else
	 if(sayi==0)
	  printf("Sayi %d dir.",sayi);
	 else
	  printf("%d sayisi negatiftir.",sayi);
	return 0;
}
