#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int a[4], i;
	
	for(i=0;i<3;i++)
		scanf("%d", &a[i]);
		
	sort(a, a+3);
	for(i=0;i<3;i++)
		printf("%d ", a[i]);


}
