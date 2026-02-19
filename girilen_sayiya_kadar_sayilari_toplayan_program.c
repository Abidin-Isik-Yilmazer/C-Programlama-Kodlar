#include <stdio.h>

int main (void){
	char karakter;
	printf("Bir harf giriniz= ");
	scanf(" %c",&karakter);
	switch(karakter){
		case 'a':
		case 'e':
		case 'u':
		case 'o':
		case 'i':printf("%c sesli bir harftir.",karakter);
		         break;
		default: printf("%c sessiz bir harftir\n",karakter);
		         printf("veya harf degildir.");
	}
	return 0;
}
