#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b&&a==c)
		printf("Á¤»ï°¢Çü");
	else if((a==b&&a+b>c)||((a<b+c)&&b==c))
		printf("ÀÌµîº¯»ï°¢Çü");
	else if((a*a)+(b*b)==(c*c))
		printf("Á÷°¢»ï°¢Çü");
	else if(a+b>c)
		printf("»ï°¢Çü");
	else
		printf("»ï°¢Çü¾Æ´Ô"); 
}
