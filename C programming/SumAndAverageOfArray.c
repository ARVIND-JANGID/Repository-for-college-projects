//sum and average of elements of a float array
#include <stdio.h>
void main(){
   int n,i;
   float a[10],sum=0,avg;
   printf("Enter No. of elements" );
   scanf("%d",&n);
   printf("Enter elements:");
   for (i=0;i<n;i++){
    scanf("%f",&a[i]);
   }
   for (i=0;i<n;i++){
    sum=sum+a[i];  // can be perform in first loop
   }
   avg=sum/n;
   printf("Sum of Elements:%.2f \n",sum);
   printf("Avarage:%.2f",avg);
}