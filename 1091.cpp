#include <stdio.h>

int main()
{
	long long int a, m, d,n;
	int i;
	scanf("%lld %lld %lld %lld", &a,&m,&d,&n);
	
	
	for(i=1;i<n;i++)
		a=a*m+d;
	
	printf("%lld",a);
	return 0;
}
