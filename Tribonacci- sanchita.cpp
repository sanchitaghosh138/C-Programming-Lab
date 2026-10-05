//tribonacci
#include <stdio.h>
int main()
{
	int next, n,a=0, b=1, c=1, i=1;
	printf ("Enter the terms:");
	scanf ("%d",&n);
	printf("Tribonacci series:");
	while (i<=n)
	{
		printf ("%d  ",a);
		next = a+b+c;
		a=b;
		b=c;
		c=next;
		i++;
	}
	printf("\n");
}
