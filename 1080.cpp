#include <stdio.h>

int main()
{

	int a,i;
	int sum=0;
	scanf("%d", &a);
	
	for(i=1;sum<a;i++)
	sum+=i;
	
	printf("%d\n", i-1);
	return 0;
}
