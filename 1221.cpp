#include<stdio.h>

int aux(int n, int j, int i)
{
	if(j > n/2 || i > 1)
	{
		if(i == 1)
			return 1;
		else 
			return 0;
	}
	else
	{
		if(n % j == 0)
		{
			i=j; 
		}
		return aux(n,j+1,i);
	}                   
}	

int primo(int x)//a função primo retorna  1 pra numeros primos e 0 pra compostos 
{
	return aux(x,1,0);       
}

int main()
{
	int x, n;
	
	scanf("%d", &n);
	
	for(; n > 0; n--)
	{
		scanf("%d", &x);
	
		if(primo(x) == 1 || x == 1)
		{
			printf("Prime\n");
		}
		else
		{
			printf("Not Prime\n");
		}
	}
		
	return 0;
}
