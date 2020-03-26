#include <stdio.h>

int main()
{
	int year;
	scanf("%d", &year);//À±³â 
	
	if(year%4==0&&year%100!=0||year%400==0)
		printf("yes"); 
	else
		printf("no"); 
		
}
