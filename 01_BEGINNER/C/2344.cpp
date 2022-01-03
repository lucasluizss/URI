#include<stdio.h>
int main()
{
	int maior = 1, x = 0;
	
	while(scanf("%d", &x) > 0 && x != 0)
	{
		if(x > maior)
		{
			maior = x;
		}		
	}
	
	printf("%d\n", maior);
	
	return 0;
}
