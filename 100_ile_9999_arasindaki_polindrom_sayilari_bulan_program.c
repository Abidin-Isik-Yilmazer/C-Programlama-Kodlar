#include <stdio.h>

int main (void){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=0;j<=9;j++){
			printf("%d\n",100*i+10*j+i);
		}
	}
	for(i=1;i<=9;i++){
		for(j=0;j<=9;j++){
			printf("%d\n",1000*i+100*j+10*j+i);
		}
	}
	return 0;
}
