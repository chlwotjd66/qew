#include <stdio.h>

int main()
{
	int age, year,a;//������� ����
	scanf("%d", &age);
	
	if(age<=13)//13���� 2001��� 
	{
		year=2012-age+1;
		printf("%d 3", year%100);
	}
	else//age>13
	{
		year=2012-age+1;
		printf("%d 1", year%100);
	}	
}
