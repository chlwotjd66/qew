#include <stdio.h>

int main()
{
	int a,b,c,d;
	double x,y;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	x=(double)a/b;
	y=(double)c/d;
	
	//printf("%f %f", (double)x,(double)y);
	if(x>y)
		printf(">");
	else if(x<y)
		printf("<");
	else
		printf("=");

}
