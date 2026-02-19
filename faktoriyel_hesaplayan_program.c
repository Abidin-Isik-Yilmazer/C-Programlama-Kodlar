#include <stdio.h>

void faktoriyel (void);

int main (void){
	faktoriyel();
	return 0;
}

void faktoriyel (void){
	int i,f,sayi;
	f=1;
	printf("Kac faktoriyel hesaplanacak= ");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	 f*=i;
	printf("%d!=%d\n",sayi,f);
}
