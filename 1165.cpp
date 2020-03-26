#include <stdio.h>

int main()
{
	int a,b,q,w;
	scanf("%d %d", &a, &b);
	
	q=(90-a)/5;
	w=(90-a)%5;
	
	if(w!=0)
		q++;
	
	printf("%d", q+b);
}
