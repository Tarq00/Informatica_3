/*sommane N numeri interi fino ad arrivare a 100. Calcolare quanti numeri sono stati utilizzati*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int somma;
	int I;
	int num;
	somma=0;
	I=0;
	while(somma<=100){
		printf("\n inserisci il numero ");
		scanf("%d", &num);
		somma=somma+num;
		I=I+1;
	}
	printf("\n i numeri usati sono %d", I );
	system("PAUSE");
}

