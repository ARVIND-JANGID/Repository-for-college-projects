// Fibonacci Series....where the third num is sum of previous two number...o 1 1 2 3 5 7 13
#include <stdio.h>
int fibo(int n)
{
  if (n==0)
   return 0;
  if (n==1)
   return 1;
 return fibo(n-1)+fibo(n-2); 
}
int main(){
int n,i;
printf("How many digits of fibonacci series do you want:");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    printf("%d",fibo(i));
}
return 0;

}