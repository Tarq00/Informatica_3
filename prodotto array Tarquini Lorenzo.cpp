/*scrivere un programma in pseudocodifica e successivamente in linguaggio C che dato un vettore di K elementi con K compreso tra N1 e N2 con N2 minore di 1000 
e uno scalare NUM intero, effettui il prodotto tra lo scalare e il vettore. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int n1; //primo valore
	int n2; //secondo valore
	int K;  //capienza array
	int NUM; //scalare
	int I;  //contatore
	int numeri[1000];  //primo array
	int numeri2[1000];  //secondo array
	
	do{  
		printf("Inserisci n1 ");
		scanf("%d", &n1);
	}while(n1<0 || n1>999); //controllo n1
	do{
		printf("Inserisci n2 ");
		scanf("%d", &n2);
	}while(n2>1000 || n2<=n1);  //controllo n2
	do{
		printf("inserisci K ");
		scanf("%d", &K);
	}while(K>n2 || K<n1); //controllo K
	printf("Inserisci NUM ");
	scanf("%d", &NUM);
	I=0; //contatore a 0
	while(I<K){ //i numeri vengono inseriti nel primo array
		printf("Inserisci un numero ");
		scanf("%d", &numeri[I]);
		I++;
	}
	I=0;  //contatore a 0
	while(I<K){  //i numeri del primo array vengono moltiplicati per NUM e inseriti in un secondo array
		numeri2[I]=numeri[I]*NUM;
		I++;
	}
	I=0;  //contatore a 0
	while(I<K){  //stammpo il secondo array
		printf("%d \n",numeri2[I]);
		I++;
	}
}
