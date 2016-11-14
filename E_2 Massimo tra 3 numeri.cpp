#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Tarquini Lorenzo 3°INA 14/11/2016
//Massimo tra tre valori
int main()
{
  int N1; //Primo valore
  int N2; //Secondo valore
  int N3; //Terzo valore
  int MAX; //
  
  printf("\n inserire il primo numero ");
  scanf("%d", &N1);
  printf("\n inserire il secondo numero ");
  scanf("%d", &N2);
  printf("\n inserire il terzo numero ");
  scanf("%d", &N3);
  
  if(N1>N2) {
  	    MAX=N1;
  }
  else{
        MAX=N2;	    
  }
  
  if(N3>MAX) {
  	    MAX=N3;
  }
  
  printf("\n Il numero massimo e' %d", MAX);
  
  system("PAUSE");
}
