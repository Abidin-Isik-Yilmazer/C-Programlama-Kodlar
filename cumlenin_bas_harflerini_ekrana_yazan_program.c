#include <stdio.h>

void bas_harfler (char* cumle);

int main (void){
	char cumle[100];
	printf("Bir cumle giriniz= ");
	gets(cumle);
	bas_harfler(cumle);
	return 0;
}

void bas_harfler (char* cumle){
	int i;
	for(i=0;*(cumle+i)!='\0';i++){
		if(i==0)
		 putchar(*cumle);
		else if(*(cumle+i)==' ')
		 putchar(*(cumle+i+1));
	}
}
