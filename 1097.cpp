#include <stdio.h>

int main()
{
	int arr[20][20]={};
	int i,j,n, x, y;
	
	
		
	for(i=1;i<=19;i++)
	{
		for(j=1;j<=19;j++)
		{
			printf("%d ", &arr[i][j]);
		}
	}	


	scanf("%d", &n);//��ǥ ���� �Է� 
	
	
	for(i=1;i<=n;i++) 
		{
			scanf("%d %d\n", &x, &y);
			
			for(j=1;j<=19;j++) 
			{
				
				if(arr[x][j]==0)
					arr[x][j]=1;
				else
					arr[x][j]=0;
			}
			
			for(j=1;j<=19;j++) 
			{
				
				if(arr[j][y]==0)
					arr[j][y]=1;
				else
					arr[j][y]=0;
			}
			
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

