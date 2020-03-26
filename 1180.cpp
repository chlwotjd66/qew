#include <stdio.h>

int main()
{
	int n,a,b,c;
	scanf("%d", &n);	
	a=n/10;
	b=n%10;
	c=(((b*10+a*1)*2)%100);
	
	if(c>50)
	{
			printf("%d\n", c);
			printf("OH MY GOD");
	}
	else
	{
		printf("%d\n", c);
		printf("GOOD");

	}

//	if(c>=100)
//	{
//		if(c>50)
//		{
//			printf("%d\n", c%100);
//			printf("OH MY GOOD");
//		}
//			
//	}
//	else if(c>50)
//	{
//		printf("%d\n",c);
//		printf("OH MY GOD");
//	}
//	else
//	{
//		printf("%d\n", c);
//		printf("GOOD");
//	}
}

