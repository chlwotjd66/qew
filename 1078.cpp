#include <stdio.h>

int main()
{

	int a,i;
	int sum = 0;
	
	scanf("%d", &a);
	for(i=2;i<=a;i=i+2)
		sum+=i;
	
	printf("%d", sum);
	return 0;

}
