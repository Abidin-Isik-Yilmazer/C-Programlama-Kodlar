#include <stdio.h>
#include <math.h>

int main (void){
	int sayi;
	int ab,cd;
	printf("Dort basamakli bir sayi giriniz= ");
	scanf("%d",&sayi);
	ab=(sayi/100);
	cd=(sayi%100);
	if(sayi==pow(ab+cd,2.0))
	 printf("%d sayisi ozel sayidir.",sayi);
	else 
	 printf("%d sayisi normal sayidir.",sayi);
	return 0;
}
