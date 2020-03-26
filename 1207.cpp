#include <stdio.h>

int main()
{
	 int a,b,c,d,e;
	 scanf("%d %d %d %d", &a, &b,&c,&d);
	 e=a+b+c+d;
	 
	 switch(e)
	 {
	 	case 1:	printf("µµ"); break; 
	 	case 2:	printf("°³"); break;
	 	case 3:	printf("°É"); break;
	 	case 4:	printf("À·"); break;
	 	default:
			printf("¸ð"); break;		 	
	 	
	 }
}
