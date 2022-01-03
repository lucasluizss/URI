#include<stdio.h>
int main()
{
	int q, d, D, r, c;
	
	scanf("%d %d", &D, &d);
	
	q = D/d;
	
	r = D%d;
	
	//(q*d+r != D) ? q++ : r++;
	if(D < 0)
	{
		q-=1;
		r-=1;
	}
	if(r < 0)
	{
		r*=-1;
	}
	
	printf("%d %d", q, r);
	
	return 0;
}
