#include <stdio.h>

int main()
{
	int arr[11][11]={};
	int i,j,d,a,b,c;//d=0(갈수 있는곳),1(벽또는 장애물),2(먹이)
	
	for(i=1;i<=10;i++)
		{
			
			for(j=1;j<=10;j++)	
				{
					
					if((i==1)||(i==10))
					{
					arr[1][i]=1;
					arr[10][i]=1;
					arr[i][1]=1;
					arr[i][10]=1;
					}
			
					printf("%d ", arr[i][j]);
				}
				printf("\n");
		
		}	
	
	
	
	
	
	
	
	
	
	
	
//	for(i=1;i<=10;i++)
//		{
//			for(j=1;j<=10;j++)	
//				{
//					printf("%d ", arr[i][j]);
//				}
//				printf("\n");
//		}	
//	
}
