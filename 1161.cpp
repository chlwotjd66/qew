#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	if(a%2==1)
	{
		printf("Ȧ��");
		printf("+");
	}
	else
		{
			printf("¦��");
			printf("+");	
		}
	
	if(b%2==1)
	{
		printf("Ȧ��");
		printf("=");
	}
	else
	{
		printf("¦��");
		printf("=");
		
	}
	if((a%2==1&&b%2==1)||(a%2==0&&b%2==0))
	{
		printf("¦��");	
	}
	else
		printf("Ȧ��");
		
}
