#include <stdio.h>

int McCarthy91 (int sayi);
int main (void){
	int sayi;
	printf("Bir sayi giriniz= ");
	scanf("%d",&sayi);
	printf("M(%d)=%d",sayi,McCarthy91(sayi));
	return 0;
}

int McCarthy91 (int sayi){
	if(sayi>100)
	 return (sayi-10);
	else
	 return McCarthy91(McCarthy91(sayi+11));
}
