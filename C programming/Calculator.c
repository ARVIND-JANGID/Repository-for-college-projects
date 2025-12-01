#include <stdio.h>
void calculator(int x, int y, char xy)
{
  if (xy=="+")
  {
    printf(x+y);
  }
  else if (xy=="-")
  {
    printf(x-y);
  }
  else if (xy=="*")
  {
    printf(x*y);
  }
  else if (xy=="/")
  {
    printf(x/y);
  }
  else
   print("Wrong Operator");
}
void main(){
    int a,b;
    char op;
    printf("Enter Two Numbers:");
    scanf("%d %d",&a,&b);
     printf("Enter Operator:");
    scanf("%c",&op);
    calculator(a,b,op);
}