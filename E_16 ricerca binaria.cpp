#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
versione 1.0*/

int main(){
    int vettore[]={2,4,10,18,23,26,33,37,42,49,53,57,63,65,71,78,83,87,95,100};   //vettore inizializzato
    int minore;  //numero minore
	int maggiore;  //numero maggiore
	int centrale;  //numero centrale
    int flag;  //variabile flag
	int I;  //contatore
    int N;  //numero
    
	flag=0;
    I=0;
	minore=0;
    maggiore=19;
    do{  //input numero
        printf("inserisci numero: ");
        scanf("%d",&N);
    }while((N<0)||(N>100));  //ricerca binaria
    while((minore<=maggiore)&&(flag==0)){
        centrale=((maggiore-minore)/2)+minore;
        if(vettore[centrale]==N){
            flag=1;
        }else{
            if(vettore[centrale]<N){
                minore=centrale+1;
            }else{
                maggiore=centrale-1;
            }
        }
        I++;
    }
    
    if(flag==1){
        printf("\nil numero si trova in posizione:%d ",centrale+1);
    }else{
        printf("\nil numero non si trova nell'array ");
    }      
    printf("\n");
    system("PAUSE");
}
