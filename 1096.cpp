#include <stdio.h>

int main()
{
	int arr[20][20]={};
	int i,j,n, x, y;
	
	scanf("%d", &n);//올려놓을 바둑 개수 
	
	for(i=0;i < n;i++) 
		{
			scanf("%d %d\n", &x, &y);
			arr[x][y]=1;
		}
		
	for(i=1;i<=19;i++)
	{
		for(j=1;j<=19;j++)
		{
			printf("%d ", arr[i][j]);
		}
			printf("\n");
	}	
		
}

