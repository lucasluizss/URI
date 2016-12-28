#include<stdio.h>
#include<string.h>
int main()
{
	char a[40], b[40];
	int aSize = 0, bSize = 0, count = 0, n = 0;
	
	scanf("%d", &n);
	for(; n > 0; n--)
	{
		scanf("%s %s", &a, &b);
	
		if(strlen(a) >= strlen(b))
		{
			aSize = strlen(a);
			bSize = strlen(b);
						
			for(;bSize > 0; bSize--)
			{
				if(a[aSize-1] == b[bSize-1])
				{
					count++;
					printf("A: %c & B: %c # Count = %d\n", a[aSize], b[bSize], count);
				}
				aSize--;
			}		
			
			if(count == strlen(b))
			{
				printf("encaixa\n");
			}
			else
			{
				printf("nao encaixa\n");	
			}
		}
		else
		{
			printf("nao encaixa\n");
		}
		
		aSize = 0;
		bSize = 0;	
		count = 0;
	}
	
	return 0;
}
