#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
versione 1.0*/

int main(){
    int N1;  //numero
	int N2; //quanti numeri
	int minore;  //numero minore
	int I;  //contatore
    printf("inserire quanti numeri: ");
    scanf("%d",&N2);         
    I=1;                    
    do{                     //stabilire numero più piccolo
       printf("inserisci numero:");
       scanf("%d",&N1);             
       if(I==1){                   
            minore=N1;
       }else{
            if(N1<minore){
                minore=N1;
             }
       }
       I++;                       
    }while(I<=N1);
    printf("il numero più piccolo e': %d",minore);
    system("PAUSE");
}
