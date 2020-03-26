#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	

	
	if(a<=170)
		printf("CRASH %d", a);
	else if(b<=170)
		printf("CRASH %d", b);	
	else if(c<=170)
		printf("CRASH %d", c);
	else if(a>170&&b>170&&c>170)
		printf("PASS");
	else
	return 0;
	
	
}	
