#include <stdio.h>

int main()
{
	int a, i=1, sum = 0;
	scanf("%d", &a);
	
	while(1)
	{
	sum+=i;
	
		if(sum>=a) 
		{
			break;
		}
	i++;
	}
		printf("%d", sum);
	
	return 0;
}
