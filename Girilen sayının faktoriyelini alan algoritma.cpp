#include <stdio.h>

int main(){
	
	
	int x, y, toplam;
	
	printf("Sayi gir\n");
	scanf("%d",&x);
	toplam = 1;
	for(y=1; y<=x; y++){
	
	toplam = toplam * y;	
		
	}
	
	printf("X'in faktoriyeli %d'dir.",toplam);
}
