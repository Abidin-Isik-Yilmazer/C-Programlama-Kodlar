#include <stdio.h>
#include <math.h>
#define PI 22/7.0

int main (void){
	float a,b,c,alan;
	printf("a kenarini giriniz= ");
	scanf("%f",&a);
	printf("b kenarini giriniz= ");
	scanf("%f",&b);
	printf("c acisini giriniz= ");
	scanf("%f",&c);
	alan=(a*b*sin(c*PI/180)/2);
	printf("Ucgenin alani= %2f",alan);
	return 0;
}
