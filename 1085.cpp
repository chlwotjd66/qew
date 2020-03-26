#include <stdio.h>

int main()
{
int	h,b,c,s;//h=1초동안 마이크로 스리강약을 체크하는수 
//한번 체크한 결과를 저장하는 비트b 
//좌우 등 소리를 저장할 트랙 개수인 채널c 
//녹음할 시간s 
	scanf("%d %d %d %d", &h,&b,&c,&s);
	printf("%.1lf MB", (double)(h*b*c*s)/(8*1024*1024));
	return 0;
}
