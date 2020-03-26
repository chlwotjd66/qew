#include <stdio.h>

int main()
{
	int b, g, age;//생년월일 성별
	scanf("%d %d", &b, &g);
	
	age = b/10000;
	switch(g)
	{
		case 1://1900년대 남자 
		{
			printf("%d", (100-age)+13);
			break;	
		}
		case 2://1900년대 여자 
		{
			printf("%d", (100-age)+13);	
			break;
		}
		case 3://2000년대 남자
		{
			printf("%d", 12-age+1);
			break;	
		}
		case 4://2000년대 여자 
		{
			printf("%d", 12-age+1);
			break;	
		}
			
	}
	
	
	
	
	
}
