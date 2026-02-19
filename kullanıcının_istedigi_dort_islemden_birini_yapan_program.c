#include <stdio.h>
#include <conio.h>

int main (void){
	float x,y,sonuc;
	char islem;
	printf("x ve y degerlerini giriniz= ");
	scanf("%f %f",&x,&y);
	printf("Yapilacak islemi giriniz (+,-,*,/)= ");
	islem=getch();
	switch(islem){
		case '+':sonuc=x+y;
		         printf("%.2f ve %.2f sayilarinin toplami= %.2f",x,y,sonuc);
		         break;
		case '-':sonuc=x-y;
		         printf("%.2f ve %.2f sayilarinin farki= %.2f",x,y,sonuc);
		         break;
		case '*':sonuc=x*y;
		         printf("%.2f ve %.2f sayilarinin carpimi= %.2f",x,y,sonuc);
		         break;
		case '/':sonuc=x/y;
		         printf("%.2f ve %.2f sayilarinin bolumu= %.2f",x,y,sonuc);
		         break;
		default: printf("Yanlis islem yaptiniz!");
	}
	return 0;
}
