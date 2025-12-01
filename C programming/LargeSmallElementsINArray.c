#include <stdio.h>
int large(int a[],int n){
int i,l;
l=a[0];
for (i=0;i<n;i++){
    if (a[i]>l){
        l=a[i];
    }
}
return l;

}
int small(int a[],int n){
int i,s;
s=a[0];
for (i=0;i<n;i++){
    if (a[i]<s){
        s=a[i];
    }
}
return s;

}
void main(){
int a[10],i,n,l,s;
printf("Enter no. of elements:");
scanf("%d",&n);
printf("Enter Elements:");
for (i=0;i<n;i++){
   scanf("%d",&a[i]);
   printf("%d",a[i]);
}
l=large(a,n);
s=small(a,n);
printf("Smallest Elements:%d \n Largest Element:%d",s,l);

}