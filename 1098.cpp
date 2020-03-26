#include <stdio.h>

int main()
{
	int i,j,h,w,n,l,d,x,y;
	//막대의 개수n/막대의 길이l/방향d(0가로y,1세x)/좌표x y/가로w/세로h 
	int arr[101][101]={0};
	
	
	
	scanf("%d %d\n", &w, &h);//격자판 가로 세로 
	scanf("%d\n", &n);//막대의 개수 
	
	for(i=1;i<=n;i++) 
		{
			scanf("%d %d %d %d", &l, &d, &x, &y);
		
			for(j=1;j<=l;j++)//방향(d)에따른 1삽입 
				if(d==0)
				{
					arr[x][y] = 1;
					y++;
				}
				else
				{
					arr[x][y] = 1;
					x++;
				}
				
		}

		
	for(i=1;i<=w;i++)//출력 
	{
		for(j=1;j<=h;j++)
		{
			printf("%d ", arr[i][j]);
		}
			printf("\n");
	}	

}

