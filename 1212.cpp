#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(c<a+b&&a<b+c&&b<a+c)
		printf("yes");
	else
		printf("no");
	
	
}
