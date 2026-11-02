/* Write a c program to print 
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1     */
#include <stdio.h>
int main(){
	int n,i,j,k;
	printf ("Enter any number:");
	scanf("%d",&n);
	k=n;
	for (i=1;i<=n;i++){
		for (j=1;j<=k;j++){
			printf("%d",j);
		}
		printf("\n");
		k--;
	}
	return 0;
}
