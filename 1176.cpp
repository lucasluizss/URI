#include<stdio.h>
int main()
{
	long long int i, fib[100], x, n;
	
	fib[0] = 0;
	fib[1] = 1;
	
	for(i = 2; i < 100; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	scanf("%lld", &x);
	
	for(i = 0; i < x; i++)
	{
		scanf("%lld", &n);
		
		printf("Fib(%lld) = %lld\n", n, fib[n]);
	}
	
	return 0;
}
