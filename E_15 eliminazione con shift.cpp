#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
versione 1.0*/

int main(){
    int vettore[101]; //array
	int I;  //contatore
	int N;  //numero da ricercare
	int G;  //grandezza array
	int Q;  //contatore
    do{
       printf("inserisci dimensione dell'array:");
       scanf("%d",&G);  //grandezza array
    }while(G>100);  //se la grandezza maggiore di 100 ripete il ciclo
    for(I=0;I<G;I++){  //carico i numeri
        printf("inserisci numero ");
        scanf("%d",&vettore[I]);
    }
    printf("inserisci numero da eliminare:");
    scanf("%d",&N);  //numero da ricercare
    I=0;
    vettore[100]=N;              
    while(vettore[I]!=N){
        I++;
    }
    if(I==100){
        printf("il numero non si trova sull'array:");
    }else{
        for(Q=I;Q<G;Q++){  //elimino il numero dall'array
            vettore[Q]=vettore[Q+1];
        }
        G--;
    }     
    for(I=0;I<N;I++){  //stampa array
        printf("\n%d",vettore[I]);
    }
    printf("\n");
    system("PAUSE");
}
