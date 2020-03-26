#include <stdio.h>

int main()
{
	int n,m,b,i,j,k, count=0;
	scanf("%d %d %d", &n, &m, &b);
	
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				for(k=0;k<b;k++)
				{
					printf("%d %d %d\n", i,j,k);
					count++;
				}
			}
		}
		printf("%d", count);
		
	return 0;
}
