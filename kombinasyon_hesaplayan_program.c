#include <stdio.h>

int main (void){
	int eleman_sayisi,r,f1,f2,f3,i,kombinasyon;
	f1=1;
	f2=1;
	f3=1;
	printf("Kumenin eleman sayisini giriniz= ");
	scanf("%d",&eleman_sayisi);
	printf("Kumenin kacli kombinasyonu hesaplanacak= ");
	scanf("%d",&r);
	for(i=1;i<=eleman_sayisi;i++)
	 f1*=i;
	for(i=1;i<=r;i++)
	 f2*=i;
	for(i=1;i<=(eleman_sayisi-r);i++)
	 f3*=i;
	kombinasyon=f1/(f2*f3);
	printf("%d elemanli kumenin %d li kombinasyonu= %d",eleman_sayisi,r,kombinasyon);
	return 0;
}
