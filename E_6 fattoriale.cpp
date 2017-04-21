#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
22/03/2017
versione 1.0*/

int main(){
    int fattoriale;  //fattoriale
	int N;  //numero
	int I;  //contatore
	
    fattoriale=1;       
    printf("inserisci il numero per il fattoriale ");
    scanf("%d",&N);
    for(I=0;I<N;I++){           //calcolo fattoriale
        fattoriale=fattoriale*(N-I);
    }
    printf("il fattoriale e':%d",fattoriale);
    system("PAUSE");
}
