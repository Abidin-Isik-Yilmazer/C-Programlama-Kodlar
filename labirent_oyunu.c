#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define GENISLIK 19
#define YUKSEKLIK 11

int px=1;
int py=1;
int can=3;

void haritayi_temizle ();
void haritayi_ciz ();


char harita [YUKSEKLIK][GENISLIK]={
	"###################",
	"#P       #      # #",
	"##### #  #   ## # #",
	"#     #  #    #   #",
	"# ### #  ###  ### #",
	"# #   #         # #",
	"# # ########### # #",
	"# #    #        # #",
	"# #### # ###  ##  X",
	"#          #     ##",
	"###################",
};

int main (void){
	char tus;
	int oyun_devam=1;
	
	while(oyun_devam==1){
		haritayi_ciz();
		tus=getch();
	
		int yeni_px,yeni_py;
		
		yeni_px=px;
		yeni_py=py;
		
		if(tus=='W' || tus=='w')
		 yeni_px--;
		if(tus=='S' || tus=='s')
		 yeni_px++;
		if(tus=='A' || tus=='a')
		 yeni_py--;
		if(tus=='D' || tus=='d')
		 yeni_py++;
		
		if(harita[yeni_px][yeni_py] != '#'){
			if(harita[yeni_px][yeni_py] == 'X'){
				printf("\nCikisa ulastiniz.");
				break;
			}
			
			harita[px][py]=' ';
			px=yeni_px;
			py=yeni_py;
			harita[yeni_px][yeni_py]='P';
		}
		else{
			can--;
			if(can==0){
				printf("\nMaalesef caniniz kalmadi!");
				oyun_devam=0;
			}
		}
	}
	return 0;
}

void haritayi_ciz (){
	haritayi_temizle ();
	int i,j;
	
	printf("**LABIRENT OYUNU**\n\n");
	printf("Can= %d\n\n",can);
	
	for(i=0;i<YUKSEKLIK;i++){
		for(j=0;j<GENISLIK;j++){
			printf("%c",harita[i][j]);
		}
		printf("\n");
	}
}

void haritayi_temizle (){
	system("cls");
}




