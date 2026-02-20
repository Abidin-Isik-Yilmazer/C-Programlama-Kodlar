#include <stdio.h>

int main (void){
	int a_matrisi[100][100],b_matrisi[100][100],toplam_matrisi[100][100];
	int i,j,k,a_satir,a_sutun,b_satir,b_sutun;
	int toplam;
	toplam=0;
	printf("a matrisinin satir ve sutun sayisini giriniz= ");
	scanf("%d %d",&a_satir,&a_sutun);
	printf("a matrisinin degerlerini giriniz= ");
	printf("\n");
	for(i=0;i<a_satir;i++){
		for(j=0;j<a_sutun;j++){
			printf("[%d][%d]= ",i,j);
			scanf("%d",&a_matrisi[i][j]);
		}
		printf("\n");
	}
	printf("b matrisinin satir ve sutun sayisini giriniz= ");
	scanf("%d %d",&b_satir,&b_sutun);
	if(a_sutun!=b_satir){
		printf("\nMatris carpimi hesaplanamaz!");
		return 0;
	}
	else{
		printf("b matrisinin degerlerini giriniz= ");
		printf("\n");
		for(i=0;i<b_satir;i++){
			for(j=0;j<b_sutun;j++){
				printf("[%d][%d]= ",i,j);
				scanf("%d",&b_matrisi[i][j]);
			}
			printf("\n");
		}
	}
	for(i=0;i<a_satir;i++){
		for(j=0;j<b_sutun;j++){
			toplam=0;
			for(k=0;k<b_satir;k++){
				toplam+=(a_matrisi[i][k]*b_matrisi[k][j]);
			}
			toplam_matrisi[i][j]=toplam;
			printf("%d ",toplam_matrisi[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
