#include <stdio.h>

int main()
{
	int a,b,c;//생년월일 성별
	scanf("%d %d %d", &a, &b, &c);
	if(c<10)
	printf("%d%d%02d",a,b,c); 
	else
	printf("%d%d%d", a,b,c); 
	
}
