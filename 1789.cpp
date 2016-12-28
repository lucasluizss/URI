#include<stdio.h>
int main()
{
	int num = 0, leitura = 0, nivel;
	
	while(scanf("%d", &leitura) != EOF)
	{
		for(;leitura > 0; leitura--)
		{
			scanf("%d", &num);
			
			if(num < 10)
			{
				nivel = 1;
			}
			else if(num >= 10 && num < 20)
			{ 
				nivel = 2;
			}
			else if(num >= 20)
			{
				nivel = 3;
			}
		}
		
		printf("%d\n", nivel);
		nivel = 0;
	}
	
	return 0;
}
