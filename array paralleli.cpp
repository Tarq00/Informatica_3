#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int N1;//numero alunni prima classe
	int N2;//numero alunni seconda classe
	int N3;//numero alunni terza classe
	int ritardo1[4];
	int ritardo2[4];
	int ritardo3[4];
	
	do{
		printf("Inserisci il numero degli alunni della prima classe \n");
		scanf("%d",&N1);
	}while(N1<1 || N1>100);
	do{
		printf("Inserisci il numero degli alunni della seconda classe \n");
		scanf("%d",&N2);
	}while(N2<1 || N2>100);
	do{
		printf("Inserisci il numero degli alunni della terza classe \n");
		scanf("%d",&N3);
	}while(N3<1 || N3>100);
	for(I=1;I<=N1;I++){
		do{
			printf("Inserisci il ritardo dell'alunno %d della classe 1 <0><5><10><15> \n",I);
			scanf("%d",&R);
		}while(R!=0 && R!=5 && R!=10 && R!=15);
		if(R=0){
			ritardo1[0]++;
		}else{
			if(R=5){
				ritardo1[1]++;
			}else{
				if(R=10){
					ritardo1[2]++;
				}else{
					if(R=15){
						ritardo1[3]++;
					}
				}
			}
		}
	}
	for(I=1;I<=N2;I++){
		do{
			printf("Inserisci il ritardo dell'alunno %d della classe 2 <0><5><10><15> \n",I);
			scanf("%d",&R);
		}while(R!=0 && R!=5 && R!=10 && R!=15);
		if(R=0){
			ritardo2[0]++;
		}else{
			if(R=5){
				ritardo2[1]++;
			}else{
				if(R=10){
					ritardo2[2]++;
				}else{
					if(R=15){
						ritardo2[3]++;
					}
				}
			}
		}
	}
	for(I=1;I<=N3;I++){
		do{
			printf("Inserisci il ritardo dell'alunno %d della classe 3 <0><5><10><15> \n",I);
			scanf("%d",&R);
		}while(R!=0 && R!=5 && R!=10 && R!=15);
		if(R=0){
			ritardo3[0]++;
		}else{
			if(R=5){
				ritardo3[1]++;
			}else{
				if(R=10){
					ritardo3[2]++;
				}else{
					if(R=15){
						ritardo3[3]++;
					}
				}
			}
		}
	}
	somma1=5*ritardo1[1]+10*ritardo1[2]+15*ritardo1[3];
	somma2=5*ritardo2[1]+10*ritardo2[2]+15*ritardo2[3];
	somma3=5*ritardo3[1]+10*ritardo3[2]+15*ritardo3[3];
	media1=somma1/N1;
	media2=somma2/N2;
	media3=somma3/N3;
	if(somma1>somma2){
		if(somma1>somma3){
			printf("La classe con il maggior ritardo e' la classe 1\n");
		}else{
			printf("La classe con il maggior ritardo e' la classe 3\n");
		}
	}else{
		if(somma2>somma3){
			printf("La classe con il maggior ritardo e' la classe 2\n");
		}else{
			printf("La classe con il maggior ritardo e' la classe 3\n");
		}
	}
	printf("la media della classe 1 e' %d \n")
}
