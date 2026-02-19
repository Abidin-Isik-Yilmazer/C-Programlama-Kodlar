#include <stdio.h>

int main (void){
	int i,j;
	int satir;
	int sutun;
	satir=25;
	sutun=80;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
