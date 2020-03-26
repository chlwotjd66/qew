#include <stdio.h>

int main()
{
	int a,b,i;
	scanf("%d %d", &a, &b);
	if(a%2==0)
		a++;
		
	for(i=a;i<=b/2-1;a=a+2)
		printf("%d", a);

}

