#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  if((n%4==0)
  {
        if( n%100 == 0)
        {
            if ( n%400 == 0)
                printf("yes");
            else
                printf("no");
        }
        else
            printf("Yes");
    }
    else
        printf("no");
    return 0;
}
