#include <stdio.h>

int main()
{
	long long int a,r,n;
	int i;
	scanf("%lld %lld %lld", &a,&r,&n);
	
	for(i=1;i<n;i++)
		a*=r;//a=a*r
	
	printf("%lld",a);
	return 0;
}
