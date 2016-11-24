#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n;
	int min;
	int I;
	int num;
	printf("\n inserire la cifra dei numeri da usare ");
	scanf("%d", &n);
	printf("\n inserire il primo numero ");
	scanf("%d", &min);
	I=1;
	while(I<n){
		printf("\n inserire il prossimo numero ");
		scanf("%d", &num);
		if(min>num){
			min=num;
		}
		I=I+1;
	}
	printf("\n il numero minore e' %d", min );
	system("PAUSE");
}
