#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,Fib[10];
    int index;
    scanf("%d",&n);
    Fib[0]=Fib[1]=1;

    for (index=2;index<=10;index++){
        Fib[index]=Fib[index-1]+Fib[index-2];
        if(n==Fib[index]){
        printf("The index of n is: %d",index);
        return 0;}
    }
    printf("n is not in Fibbonaci sequence");
    return 0;
}
