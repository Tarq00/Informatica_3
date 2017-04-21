#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
versione 1.0*/

int main(){
    int I;  //contatore
	int N;  //numero moltiplicato
	int R;  //risultato
    for(I=2;I<=10;I++){  //cambio tabellina
        R=0;  
        printf("tabellina %d",I);
        for(N=1;N<=10;N++){   //output tabellina
            R=R+I;
            printf("\n%d*%d=%d",I,N,R);
        }
        printf("\n");               
    } 
    system("PAUSE");
}
