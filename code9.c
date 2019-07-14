#include<stdio.h>
void main()
{
	int a,b,i,j,n=0;
	scanf("%d%d",&a,&b);
	int c[a];
	if(a<b)
		printf("invalid")
	else
	{
		
		for(i=0;i<a;i++)
		{
			scanf("%d",&c[i]);
		}
		for(j=0;j<b;j++)
		{
		  n=n+c[j];
		}
	}
}
