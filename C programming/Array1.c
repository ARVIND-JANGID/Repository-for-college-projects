// To find given elements position in Array
#include <stdio.h>
void main(){
    int a[10],i,n,e,f=0;
    printf("Enter no of elements");
    scanf("%d",&n);
    printf("\n Enter elements:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }
    printf("\n Enter Element do you want to find");
    scanf("%d",&e);
    for (i=0;i<n;i++){
        if (a[i]==e){
            printf("\n Given element is at %d position",i+1);
            f=1;
            break;
        }
    }
    if (f==0){
        printf("\n Element no found");
    }

}