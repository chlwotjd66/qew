#include <stdio.h>

int main()
{
	double a,b,c,d;
	scanf("%lf %lf", &a, &b);
	if(a>160)
		c=(a-100)*0.9;
	else if(a>150)
		c=(a-150)/2+50;
	else
		c=(a-100);
	
	//c=(a-100)*(0.9); ǥ�ظ����� 
	d=(b-c)*100/c;//�񸸵� 
	
	//printf("%f %f %f %f",a,b ,c,d); 
	if(d>20)
		printf("��");
	else if(d>10)
		printf("��ü��");
	else
		printf("����"); 
	
	
}
