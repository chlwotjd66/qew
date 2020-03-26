#include <stdio.h>

int main()
{
	int k[10000]={};
	int i,n,j;
	int f =100;	
	scanf("%d\n", &n);
	
	for(i=0;i<n;i++)	
		scanf("%d ", &k[i]);
	
	for(j=0;j<n;j++)
	{
		if(f>k[j])
			f=k[j];			
	}
		
		printf("%d", f);

}
