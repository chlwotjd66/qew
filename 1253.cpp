#include <stdio.h>

int main()
{
	int a,b,i,temp;
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		temp=b;
		b=a;
		a=temp;		
	}

	for(i=a;i<=b;i++)
		printf("%d ", i);



}
