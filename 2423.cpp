#include<stdio.h>
int main()
{
	int a, b, c, sum, x = 1, farinha, ovo, leite;
	
	scanf("%d %d %d", &a, &b, &c);
		
	farinha = a / 2;
	ovo = b / 3;
	leite = c / 5;
	
	if(farinha == ovo && ovo == leite)
	{
		printf("%d\n", farinha);	
	}	
	
	return 0;
}
