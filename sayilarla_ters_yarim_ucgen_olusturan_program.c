#include <stdio.h>

int main (void){
	int i,j,k;
	for(i=1;i<=7;i++){
		for(k=1;k<=7-i;k++)
		 printf("  ");
		for(j=i;j>=1;j--)
		 printf("%d ",j);
	printf("\n");
	}
	return 0;
}
