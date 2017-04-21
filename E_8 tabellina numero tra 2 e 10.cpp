#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Tarquini Lorenzo
3°INA
versione 1.0*/

int main(){
    int N;  //numero tabellina
	int I;  //contatore
	int R;  //rislutati
    do{       
        printf("inserire numero tra 2 e 10: ");  //inserimento numero tabellina
        scanf("%d",&N);
    }while((N<2)||(N>10));
    for(I=0;I<=10;I++){    //calcolo e output tabellina
        R=N*I;      
        printf("\n\n %d*%d=%d",N,I,R);
    }
    system("PAUSE");
}
