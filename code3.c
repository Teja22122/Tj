#include<stdio.h>
void main()
{
  char ch;
  scanf("%c",&ch);
  if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
  {
    switch(ch)
    {
       case a:printf("vowel");
           break;
       case e:printf("vowel");
           break;
      case i:printf("vowel");
           break;
      case o:printf("vowel");
           break;
       case u:printf("vowel");
           break;
       default:printf("consonants");
            break;
    }
  }
  else
    printf("invalid")
}
