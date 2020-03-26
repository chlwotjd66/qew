#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	if((50<=a&&a<=70)||(a%6==0))
		printf("win\n");
	else
		printf("lose\n");

	
}
