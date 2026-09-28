// 0,1,1,2,3,5,8... upto n terms.W.c.p to display the given sequence.
#include <stdio.h>
int main()
{
	int i=1,n,a=0,b=1,c;
	printf("Enter a number:");
	scanf("%d",&n);
	while (i<=n)
	{
	printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
