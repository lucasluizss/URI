#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i = 0, s = 0;
	
	scanf("%s", &a);
	
	i = strlen(a);
	
	for(; i > 0; i--)
	{
		if(s % 2 == 0)
		{
			printf("%c", a[i]-32);
		}
		else
		{
			printf("%c", a[i]-32);
		}
		
		s++;
	}
	
	return 0;
}
