#include <stdio.h>

int main()
{
	int b, g, age;//������� ����
	scanf("%d %d", &b, &g);
	
	age = b/10000;
	switch(g)
	{
		case 1://1900��� ���� 
		{
			printf("%d", (100-age)+13);
			break;	
		}
		case 2://1900��� ���� 
		{
			printf("%d", (100-age)+13);	
			break;
		}
		case 3://2000��� ����
		{
			printf("%d", 12-age+1);
			break;	
		}
		case 4://2000��� ���� 
		{
			printf("%d", 12-age+1);
			break;	
		}
			
	}
	
	
	
	
	
}
