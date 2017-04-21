#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
versione 1.0*/

int main(){
	int L;	//lato quadrato
	int R;	//righe 
	int C;	//colonne
	do{
		printf("Inserisci lato (tra 2 e 20) ");
		scanf("%d",&L);
	}while((L<2)||(L>20));
	R=0;
    while(R<L){
    	C=0;
    	while(C<L){
    		printf(" *");
    		C++;
		}
	  printf("\n");
	  R++;
	}
}
