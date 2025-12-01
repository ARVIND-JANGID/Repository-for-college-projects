// To find that given 2D Array is symmetric(A=1/Ainverse) or not
#include <stdio.h>
void main(){
    int a[5][5],i,j,r,c,f=0;
    printf("Enter No of rows:");
    scanf("%d",&r);
    printf("Enter No of colums:");
    scanf("%d",&c);
    printf("Enter Elements:");
    for (i=0;i<r;i++){ 
        for (j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            if (a[i][j]!=a[j][i]){
                f=1;
                break;
            }
        }
    }
    if (f==0){
        printf("Symmetric");
    }
    else {
        printf("Not symmertic");
    }
    
}