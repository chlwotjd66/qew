#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	if(a%2==1)
	{
		printf("�汝�");
		printf("+");
	}
	else
		{
			printf("礎熱");
			printf("+");	
		}
	
	if(b%2==1)
	{
		printf("�汝�");
		printf("=");
	}
	else
	{
		printf("礎熱");
		printf("=");
		
	}
	if((a%2==1&&b%2==1)||(a%2==0&&b%2==0))
	{
		printf("礎熱");	
	}
	else
		printf("�汝�");
		
}
