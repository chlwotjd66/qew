#include <stdio.h>

int main()
{
	int h,m;
	scanf("%d %d", &h, &m);
	if(h==0)
	{
		
		if(m-30<0)
		printf("%d %d", h+24-1, m-30+60);
		else
		printf("%d %d", h,m-30);	
	}
	else
	{
		if(m-30<0)
		printf("%d %d", h-1, m-30+60);
		else
		printf("%d %d", h,m-30);
	}
}	
