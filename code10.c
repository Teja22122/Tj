#include<stdio.h>
void main()
{
	int n,i;
	scanf("%d",&n);
	while(n!=0)
	{
			n=n/10;
			i=i+1;
	}
	printf("%d",i);
}
