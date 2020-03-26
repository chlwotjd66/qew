#include <stdio.h>

int main()
{
	int a,b,c,max,temp,i;
	scanf("%d %d %d", &a,&b,&c);
	
	if(a>b)	
	{
		if(a>c)//최고값은 a인 경우 
			printf("%d", (b>c)?b:c);
		else
			printf("%d", a);
	}
	else	
	{
		if(b>c)
			printf("%d", (a>c)?a:c);
		else
			printf("%d", b);
	}
	
	
}
