#include <stdio.h>


void main()
{
int a=100,c,d,e;
	while(a<=999)
	{
		c=a/1%10;
		d=a/10%10;
		e=a/100%10;
		if(c*c*c+d*d*d+e*e*e==a)
		{
			printf("%d\t",a);
		}
		a++;
	}
	putchar('\n');
}