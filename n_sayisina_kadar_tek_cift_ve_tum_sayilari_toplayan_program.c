#include <stdio.h>

int main (void){
	int sayi,i,t1,t2,t3;
	t1=0;
	t2=0;
	t3=0;
	printf("Bir sayi giriniz= ");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	 t1+=i;
	for(i=2;i<=sayi;i+=2)
	 t2=t2+i;
	for(i=1;i<=sayi;i+=2)
	 t3=t3+i;
	printf("%d e kadar tum sayilarin toplami= %d\n",sayi,t1);
	printf("%d e kadar tum cift sayilarin toplami= %d\n",sayi,t2);
	printf("%d e kadar tum tek sayilarin toplami= %d\n",sayi,t3);
	return 0;
}
