#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*tarquini Lorenzo
3INA
24/11/2016
versione 1.0*/
int main()
{
	int prezzo;
	int si;
	int accomp;
	int eta;
	int altezza;
	printf("\n la persona e' diversamente abile? si=1 no=0 ");
	scanf("%d", &si);
	if(si=1){
		printf("\n la persona ha un'accompagnatore? si=1 no=0 ");
		scanf("%d", &accomp);
		if(accomp=1){
			prezzo=25.00;
			printf("\n il prezzo del biglietto e di euro %d", prezzo);
			system("PAUSE");
	    }
		else{
            prezzo=0;
            printf("\n il prezzo del biglietto e' di euro %d", prezzo );
            system("PAUSE");
	    }
    }
	else{
	    printf("\n inserire l'eta' ");
	    scanf("%d", &eta);
	    if(eta>=60){
	    	prezzo=25.00;
	    	printf("\n il prezzo del biglietto e' di euro %d", prezzo );
	    	system("PAUSE");
	    }
		else{
		    printf("\n inserire l'altezza" );
			scanf("%d", &altezza);
			if(100<=altezza>=140){
				prezzo=28.00;
				printf("\n il prezzo del biglietto e' di euro %d", prezzo );
				system("PAUSE");
		    }
			else{
			    if(altezza>140){
			    	prezzo=34.90;
			    	printf("\n il prezzo del biglietto e' di euro %d", prezzo );
			    	system("PAUSE");
			    }
				else{
					if(altezza<100){
						prezzo=0;
						printf("\n il prezzo del biglietto e' di euro %d", prezzo );
						system("PAUSE");
					}
				}	
			}	
		}
	
	}
}
