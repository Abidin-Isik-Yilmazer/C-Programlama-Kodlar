#include <stdio.h>

void harfleri_bulma (char cumle[],int harf_sayisi[]);

int i=0;

int main (void){
	char cumle[100];
	int harf_sayisi[26];
	printf("Bir cumle giriniz= ");
	do{
		scanf("%c",&cumle[i]);
		i++;
	}while(cumle[i-1]!='.');
	harfleri_bulma(cumle,harf_sayisi);
	for(i=0;i<26;i++)
	 printf("%c/%c= %d\n",'A'+i,'a'+i,harf_sayisi[i]);
	return 0;
}

void harfleri_bulma (char cumle[],int harf_sayisi[]){
	for(i=0;i<26;i++)
	 harf_sayisi[i]=0;
	for(i=0;i!='.';i++){
		if(cumle[i]>='A' && cumle[i]<='Z')
		 harf_sayisi[(int)cumle[i]-(int)'A']++;
		if(cumle[i]>='a' && cumle[i]<='z')
		 harf_sayisi[(int)cumle[i]-(int)'a']++;
	}
}
