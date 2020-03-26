#include <stdio.h>

int main()
{
	int a, i,j,k;
	scanf("%d", &a);
	
	i=a/10;//За 
	j=a%10;//·Д 
	//printf("%d %d %d",a,i,j);
	
	if(j>=4)
		printf("%dth", a);
	else if(j==1)
	{
		if(i==1)
			printf("%dth", a);
		else
			printf("%dst", a);
	}
	else if(j==2)
	{
		if(i==1)
			printf("%dth", a);
		else
			printf("%dnd", a);
	}
	else if(j==3)
	{
		if(i==1)
			printf("%dth", a);
		else
			printf("%drd", a);
	}
	else
		printf("%dth", a);

}
