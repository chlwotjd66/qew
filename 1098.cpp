#include <stdio.h>

int main()
{
	int i,j,h,w,n,l,d,x,y;
	//������ ����n/������ ����l/����d(0����y,1��x)/��ǥx y/����w/����h 
	int arr[101][101]={0};
	
	
	
	scanf("%d %d\n", &w, &h);//������ ���� ���� 
	scanf("%d\n", &n);//������ ���� 
	
	for(i=1;i<=n;i++) 
		{
			scanf("%d %d %d %d", &l, &d, &x, &y);
		
			for(j=1;j<=l;j++)//����(d)������ 1���� 
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

		
	for(i=1;i<=w;i++)//��� 
	{
		for(j=1;j<=h;j++)
		{
			printf("%d ", arr[i][j]);
		}
			printf("\n");
	}	

}

