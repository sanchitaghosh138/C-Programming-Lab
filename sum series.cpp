// 1+2+4+17+11+... upto n terms.W.c.p to calculate sum of the given series.
#include <stdio.h>
int main(){
	int i=1,n,sum=0,term=1, d=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while (i<=n)
	{
	printf("%d\t",term);
		sum +=term;
		term = term+d;
		d++;
		i++;
	}
	printf ("Sum of the series =%d",sum);
	return 0;
}
