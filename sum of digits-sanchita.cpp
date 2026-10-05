//w.a.p to calculate the sum of digits 
#include<stdio.h>
int main()
{
	int num,sum=0,digit;
	printf("Enter the number:");
	scanf("%d",&num);
	while (num!=0)
	{
	digit = num %10;
	num = num/10;
	sum= sum +digit;
}
printf("Sum of digit:%d",sum);
return 0;
}
