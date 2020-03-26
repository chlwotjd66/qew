#include <stdio.h>

int main()
{

	char x, t= 97;
	
	scanf("%c", &x);
	
	do
	{
		printf("%c ", t);	
		t+=1;
		
	}while(t<=x);


}
