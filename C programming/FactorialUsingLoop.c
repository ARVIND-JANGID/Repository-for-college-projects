#include <stdio.h>
int factorial(int n){ 
 int i,f=1;
   for (i=1;i<=n;i++)
    {     
       f=f*i;
    }
    return f;
}
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorial(num));
    return 0;
}