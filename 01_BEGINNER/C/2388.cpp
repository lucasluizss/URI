#include<stdio.h>
int main()
{
	int leitura, distancia = 0, tempo, velocidade;
	
	scanf("%d", &leitura);
	
	for(;leitura > 0; leitura--)
	{
		scanf("%d %d", &tempo, &velocidade);
		
		distancia += tempo * velocidade;
	}
	
	printf("%d\n", distancia);	
	
	return 0;
}
