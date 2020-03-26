#include <stdio.h>

int main()
{
	int year, month, day;
	scanf("%d %d %d", &year, &month, &day);
	
	if((((year+month+day)%1000)/100)%2==0)
		printf("대박");
	else
		printf("그럭저럭"); 
	
	
}
