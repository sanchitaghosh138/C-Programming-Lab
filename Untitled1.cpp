// 2+5+8+11+14+... upto n terms.W.c.p to calculate sum of the given series.
#include <stdio.h>
int main(){
	int i=1,n,sum=0,term=2;
	printf("Enter a number:");
	scanf("%d",&n);
	while (i<=n)
	{
		sum +=term;
		term = term+3;
		i++;
	}
	printf ("Sum of the series =%d",sum);
	return 0;
}
