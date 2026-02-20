#include <stdio.h>

struct yas{
	int gun;
	int ay;
	int yil;
};

int main (void){
	struct yas x,y;
	printf("Dogdugunuz yilin tarihini (gun,ay,yil) girin= ");
	scanf("%d%d%d",&x.gun,&x.ay,&x.yil);
	printf("Bugunun tarihini (gun,ay,yil) girin= ");
	scanf("%d%d%d",&y.gun,&y.ay,&y.yil);
	if(x.ay>y.ay){
		y.ay+=12;
		y.yil-=1;
	}
	if(x.gun>y.gun){
		y.gun+=30;
		y.ay-=1;
	}
	printf("yasiniz= %d yil %d ay %d gun",y.yil-x.yil,y.ay-x.ay,y.gun-x.gun);
	return 0;
}
