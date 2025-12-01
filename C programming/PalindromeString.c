 // To check the given string is palindrome or not
#include <stdio.h>
#include <string.h>
void main(){
int i=0,j,n;
char st[30],temp;
printf("Enter String");
gets(st);
//to find length of given string
while(st[i]!='\0'){ 
    i=i+1;
}
printf("Length of the string is:%d \n",i);
j=i-1; //indexing of last charecter
n=j;
i=0; //indexing of first characte
for (i=0,j=n;i=n,j=0;i++,j--){
     temp=st[i];
     st[i]=st[j];
     st[j]=temp;
}
if (st[i]==st[j]){
    printf("The String is Palindrome");  
}
else{
    printf("String is not Palindrome");
}
}