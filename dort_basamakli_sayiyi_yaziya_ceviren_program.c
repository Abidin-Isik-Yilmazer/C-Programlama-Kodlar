#include <stdio.h>

void birler_basamagi (int rakam);
void onlar_basamagi (int rakam);

int main (void){
	int sayi,b1,b2,b3,b4;
	sayi=0;
	while(sayi!=-1){
		printf("Dort basamakli bir sayi giriniz= ");
		scanf("%d",&sayi);
		if(sayi==-1)
		 break;
		b1=sayi%10;
		b2=(sayi/10)%10;
		b3=(sayi/100)%10;
		b4=sayi/1000;
		if(b4!=1)
		 birler_basamagi(b4);
		printf(" Bin ");
	    if(b3!=1)
	     birler_basamagi(b3);
	    if(b3!=0)
	     printf(" Yuz ");
	    onlar_basamagi(b2);
	    printf(" ");
	    birler_basamagi(b1);
	    printf("\n\n");
	}
	return 0;
}

void birler_basamagi (int rakam){
	switch(rakam){
		case 1:printf("Bir");
		       break;
		case 2:printf("Iki");
		       break;
		case 3:printf("Uc");
		       break;
		case 4:printf("Dort");
		       break;
		case 5:printf("Bes");
		       break;
		case 6:printf("Alti"); 
		       break;
		case 7:printf("Yedi");
		       break;
	    case 8:printf("Sekiz");
	           break;
	    case 9:printf("Dokuz");
	           break;
	}
}

void onlar_basamagi (int rakam){
	switch(rakam){
		case 1:printf("On");
		       break;
	    case 2:printf("Yirmi");
	           break;
	    case 3:printf("Otuz");
	           break;
	    case 4:printf("Kirk");
	           break;
	    case 5:printf("Elli");
	           break;
	    case 6:printf("Altmis");
	           break;
	    case 7:printf("Yetmis");
	           break;
	    case 8:printf("Seksen");
	           break;
	    case 9:printf("Doksan");
	           break;
	}
}

