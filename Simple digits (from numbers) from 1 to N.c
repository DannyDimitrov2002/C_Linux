#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){ //podavame argument. Za bonus taska
	int prosto = 1;
	int sborno = 0;
	int j, reserv;
	int a = atoi(argv[1]); //prevrushtame argumenta v integer
	
	//for(int i = 2; i <= 10000; i++)
	for(int i = 2; i <= a; i++)
	{
		prosto = 1;
		sborno = 0;
		reserv = i; // za da mojem da delim i go zapazvam v druga promenliva
		
		while(reserv > 0)
		{
			sborno += reserv % 10;
			reserv = reserv / 10; 
		}
		
		
		for(j = 2; j < sborno/2 + 1; ++j) // sborno /2 + 1 za da ima po malko cicli i da vaji za 4
		{
			if(sborno % j == 0)
			{
				prosto = 0;	
				break;		
			}
		}
		
		if(prosto == 1)
		{
			if(sborno != 1) //1 ne e prosto chislo
			{
				printf("%d\n", i);			
						
			}
		}
	}


	return 0;
}
