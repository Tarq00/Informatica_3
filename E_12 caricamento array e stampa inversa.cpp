#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
versione 1.0*/

int main(){
	int numeri[10];
	int x;
	for(x=0;x<10;x++){
		printf("Inserisci il numero");
		scanf("%d",&numeri[x]);
	}
	for(x=9;x>=0;x--){
		if(numeri[x]!=0);
			printf("%d\n",numeri[x]);
	}
}
