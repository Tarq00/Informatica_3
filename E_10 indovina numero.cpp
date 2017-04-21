#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
versione 1.0*/

int main()
{
    int N1;  //numero generato
    int indovinato;  //indovinato
    int tentativi;  //tentativi
    int N2;  //numero
    int difficolta;  //difficoltà
    
    N1=rand()%21;  //genera numero casuale
    indovinato=0;  
    tentativi=10;    
	printf("Scegliere la difficlotà (0=hard o 1=easy): ");  //inserire la difficoltà                                                
    scanf("%d",&difficolta);
    do{
        printf("Inserire un numero: ");  //inserimento numero
        scanf("%d",&N2);    
	    printf("\n");                                                      
        if(N2==N1){//se il numero inserito è uguale a quello generato indovinato=1
            indovinato=1;
        }
        else{ 
            printf("Hai sbagliato ");       
		    printf("\n");
                if(difficolta==1){  //ciclo stabilisce se è minore o maggiore
                    if(N2>N1){
                        printf("il numero inserito e' maggiore \n");
                    }
                    else{
                        printf("il numero inserito e' minore \n"); 
                    }
                }
              tentativi--;
	        }  
    }while((tentativi>0)&&(indovinato==0));
    if(indovinato==1){  //se indovinato=1 hai vointo altrimenti hai perso
            printf("\nHai vinto "); 
    }
    else{
            printf("\nHai perso "); 
    }                                        
}
