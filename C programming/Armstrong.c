#include <stdio.h>
#include <math.h>
void main(){
    int n,n1,r,c=0,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    n1=n;
    while (n>0)
    {
        n=n/10;
        c=c+1;
    }
    n=n1;
    while (n1>0)
    {
        r=n1%10;
        sum=sum+pow(r,c);
        n1=n1/10;
    }
    if (sum==n)
     {printf("Armstrong Number");}
    else
     {printf("Not Armstrong");}
}
