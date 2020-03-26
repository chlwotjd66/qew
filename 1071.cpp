#include <stdio.h>

int main()
{
	
	int a;
	play:
	scanf("%d", &a);
	
	if(a!=0)
	{
	printf("%d\n", a);
	goto play;
	}
	else
	return 0;
}
