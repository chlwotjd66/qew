#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	if(a%2==1)
	{
		printf("È¦¼ö");
		printf("+");
	}
	else
		{
			printf("Â¦¼ö");
			printf("+");	
		}
	
	if(b%2==1)
	{
		printf("È¦¼ö");
		printf("=");
	}
	else
	{
		printf("Â¦¼ö");
		printf("=");
		
	}
	if((a%2==1&&b%2==1)||(a%2==0&&b%2==0))
	{
		printf("Â¦¼ö");	
	}
	else
		printf("È¦¼ö");
		
}
