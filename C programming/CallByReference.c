#include <stdio.h>
void change(int *x)
{
  *x=100;
}
int main(){
    int a=10;
    change(&a);
    printf("Value of a:%d",a);
    return 0;
    // Value of a change because of x.
    // in "Call By Reference" the address of variable is passed to the function.
}