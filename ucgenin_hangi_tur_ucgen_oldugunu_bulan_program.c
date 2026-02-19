#include <stdio.h>

int main (void){
	float a,b,c;
	float en_uzun_kenar;
	printf("Ucgenin kenar uzunluklarini giriniz= ");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b && b>c)
	 en_uzun_kenar=a;
	else if(b>a && b>c)
	 en_uzun_kenar=b;
	else 
	 en_uzun_kenar=c;
	if(en_uzun_kenar==a)
	 if(a*a==b*b+c*c)
	  printf("Dik acili ucgen");
     else if(a*a<b*b+c*c)
      printf("Dar acili ucgen");
     else
      printf("Genis acili ucgen");
    else if(en_uzun_kenar==b)
     if(b*b==a*a+c*c)
      printf("Dik acili ucgen");
     else if(b*b<a*a+c*c)
      printf("Dar acili ucgen");
     else
      printf("Genis acili ucgen");
    else
     if(c*c==a*a+b*b)
      printf("Dik acili ucgen");
     else if(c*c<a*a+b*b)
      printf("Dar acili ucgen");
     else
      printf("Genis acili ucgen");
    return 0;
}
