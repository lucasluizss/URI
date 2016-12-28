#include<stdio.h>
int main()
{
	//INCOMPLETO
	int x, i, j, count = 0;
	
	scanf("%d", &x);
	
	int vet[x];
	
	for(i = 0; i < x; i++)
	{
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < x; i++)
	{
		for(j = 1; j < x; j++)
		{
			if(vet[i] == vet[j])
			{
				printf("%d  -  %d\n", vet[i], vet[j]);
				count++;
			}
		}
	}	
	
	printf("\n\nCount: %d\n", count);
	
	return 0;
}
