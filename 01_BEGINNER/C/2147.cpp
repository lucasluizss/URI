#include<stdio.h>
#include<string.h>
int main()
{
	int x;
	char word[10000];
	
	scanf("%d", &x);
	
	for(;x > 0; x--)
	{
		scanf("%s", &word);
	
		printf("%.2lf\n", (double)strlen(word)/100);
	}
		
	return 0;
}
