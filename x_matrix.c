#include <stdio.h>

int main (void){
	int i,j,boyut;
	printf("Matrisin boyutunu giriniz= ");
	scanf("%d",&boyut);
	printf("\n");
	int matris[boyut][boyut];
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			matris[i][j]=0;
		}
	}
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			if(i==j)
			 matris[i][j]=1;
			if(i+j==boyut-1)
			 matris[i][j]=1;
		}
	}
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	return 0;
}
