#include <stdio.h>

int main()
{
	
	int a[24]={};
	int i,n,b;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b);
		a[b]=a[b]+1;	
	}
	
	for(i=1;i<=23;i++)
		printf("%d ", a[i]);
}
