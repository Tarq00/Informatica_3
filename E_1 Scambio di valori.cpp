#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Tarquini Lorenzo 3°INA 14/11/2016
//Scambio di valori
int main()
{
  int a; //Primo valore
  int b; //Secondo valore
  int c; //Variabile temporanea
  
  printf("\n Inserire il primo numero ");
  scanf("%d" ,&a);
  printf("\n Inserire il secondo numero ");
  scanf("%d" ,&b);
  
  c=a;
  a=b;
  b=c;
  
  printf("\n il primo numero e' %d", a);
  printf("\n il secondo numero e' %d", b);
  
  system("PAUSE");
}
