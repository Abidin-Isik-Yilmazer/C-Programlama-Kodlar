#include <stdio.h>

int main (void){
	int sayi,birinci,ikinci,ucuncu,i;
	birinci=1;
	ikinci=1;
	printf("Kac tane Fibonacci dizisi yazilacak= ");
	scanf("%d",&sayi);
	printf("%d %d ",birinci,ikinci);
	for(i=3;i<=sayi;i++){
		ucuncu=birinci+ikinci;
		printf("%d ",ucuncu);
		birinci=ikinci;
		ikinci=ucuncu;
	}
	return 0;
}
