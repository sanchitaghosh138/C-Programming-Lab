#include<stdio.h>
int main()
{
	int i=1, c=1, a=1, n;
	long int fact=1,sum=0;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	
	while(c<=n)
	{
		i=1;
		fact=1;
		while(i<=a)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		c++;
		a=a+2;	
	}
	printf("sum of the numbers=%d",sum);
	return 0;
	
}
