#include <stdio.h>
#include <stdlib.h>

int main()
{ char s;
  char m;
  char f;
  int a;
 printf("what is your gender?: ");
 scanf("%c",&s);
 printf("enter you age?: ");
 scanf("%d",&a);
 if((s== 'm' && a>=20)||(s=='f'&& a>=18 && a<=35))
 printf("do need to pay tax");

 else if((s== 'm' && a<20)||(s=='f'&& a<
                             18 && a<35))
   {

    printf("you dont need to apy tax");}
    else printf("enter f for female and m or male");





    return 0;
}
