#include <stdio.h>
#define SIZE 4
int main()
{
	unsigned int n,r=0,a;
	scanf("%u",&n);
	for(int i=0;i<SIZE;i++)
	{   a=n&1;
	    r=r<<1|a;
		n>>=1;
	}
	printf("%d",r);
}



