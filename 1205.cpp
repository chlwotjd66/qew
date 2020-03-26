#include <stdio.h>
#include <math.h>

int main()
{
	int q,w,a,b,c,d,e, max = 0;
	scanf("%d %d", &q, &w);
	
	a=q+w;
	c=q*w;
	
	if(q>w)
	{
		e=q^w; 
		d=q/w;
		b=q-w;
	}
	else
	{
		d=w/q;
		e=w^q;
		b=w-q;
	}
		 
	printf("%f %f %f %f %lf\n",(float)a,(float)b,(float)c,(float)d,(double)e);

	if(a>=b&&a>=c&&a>=d&&a>=e)
		printf("%f", (float)a);
	else if(b>=a&&b>=c&&b>=d&&b>=e)
		printf("%f", (float)b);
	else if(c>=a&&c>=b&&c>=d&&c>=e)
		printf("%f", (float)c);
	else if(d>=a&&d>=c&&d>=e&&d>=b)
		printf("%.6lf", (double)d);
	else
		printf("%f", (float)e);
	
}
