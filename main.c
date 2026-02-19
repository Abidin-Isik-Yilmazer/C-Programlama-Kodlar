#include <stdio.h>
#include <math.h>
#define PI 22/7.0

int main (void){
	float yaricap,alan,cevre;
	printf("Dairenin yaricapini giriniz= ");
	scanf("%f",&yaricap);
	alan=PI*pow(yaricap,2.0);
	cevre=2*PI*yaricap;
	printf("Direnin alani= %.2f dir.\n",alan);
	printf("Dairenin cevresi= %.2f dir.",cevre);
	return 0;
}
