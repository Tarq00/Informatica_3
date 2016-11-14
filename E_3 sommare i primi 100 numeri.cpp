#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Tarquini Lorenzo 3°INA 14/11/2016
//Sommare i primi 100 numeri
int main()
{
  int somma;
  int I;
  somma=0;
  I=1; 
  
  while(I<=100) {
  	       somma=somma+I;
  	       I=I+1;
  }
  printf("\n %d", somma);
  
system("PAUSE");
}
