#include <stdio.h>

int main()
{
	int a,b,c,q,w,i;
	scanf("%d %d %d", &a, &b, &c);
	
	
	q=(90-a)/5;
	w=(90-a)%5;
	a=a+q;
	
		if(w!=0)
			q++;
		
	if(q+b>c)
		printf("win");
	else if((q+b)==c)
		printf("same");
	else
		printf("lose");

}
