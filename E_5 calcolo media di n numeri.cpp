#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
22/03/2017
versione 1.0*/

int main(){
    int N1;  //quanti numeri
	int somma;  //somma
	int media;  //media
	int N2;  //numero
	int I;  //contatore
    printf("inserire quantita' di numeri:");
    scanf("%d",&N1);          
    somma=0;        
    I=0;                       
    while(I<N1){  //ciclo inserimento numeri
        printf("inserire un numero:");
        scanf("%d",&N2);
        somma=somma+N2;      
        I=I+1;           
    }
    media=somma/N1;  //calcolo media
    printf("la media e':%d",media);
    system("PAUSE");
}
