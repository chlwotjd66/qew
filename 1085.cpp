#include <stdio.h>

int main()
{
int	h,b,c,s;//h=1�ʵ��� ����ũ�� ���������� üũ�ϴ¼� 
//�ѹ� üũ�� ����� �����ϴ� ��Ʈb 
//�¿� �� �Ҹ��� ������ Ʈ�� ������ ä��c 
//������ �ð�s 
	scanf("%d %d %d %d", &h,&b,&c,&s);
	printf("%.1lf MB", (double)(h*b*c*s)/(8*1024*1024));
	return 0;
}
