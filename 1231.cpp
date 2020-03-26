#include <stdio.h>

int main()
{
	int a,b;
	char i;
	scanf("%d%c%d", &a,&i,&b);
	
	switch(i)
	{
		case '+':
			printf("%d", a+b); break;			
		case '-':
			printf("%d", a-b); break;
		case '*':
			printf("%d", a*b); break;
		case '/':
			printf("%.2f",(double)a/b); break;
	}
}
