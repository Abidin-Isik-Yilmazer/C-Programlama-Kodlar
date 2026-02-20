#include <stdio.h>

void yazma (char* harfler);

int main (void){
	char harfler[7]={'Y','A','Z','I','L','I','M'};
	yazma(harfler);
	return 0;
}

void yazma (char* harfler){
	int i,j;
	for(i=0;i<8;i++){
		for(j=i;j<7;j++){
			printf("%c",*(harfler+j));
		}
		for(j=0;j<i;j++){
			printf("%c",*(harfler+j));
		}
		printf("\n");
	}
}
