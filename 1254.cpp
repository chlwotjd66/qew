#include <stdio.h>

int main()
{
	int i;
	char a,b;
	scanf("%c %c", &a, &b);
	
	while(a<=b)
	{
		printf("%c ",a);
		a++;
	}
	
//	for(i=a;i<=b;i++)
//		printf("%c ", a);
	
}
