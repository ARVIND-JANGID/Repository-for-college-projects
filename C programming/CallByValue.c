#include <stdio.h>
void change(int x)
{
    x=100;
}
int main(){
    int a=10;
    change(a);
    printf("Value of a:%d",a);
    return 0;
    // This Function change the value of x but does not affect a.
    // in "Call By Values" a copy of actual variable passed to the function.
}