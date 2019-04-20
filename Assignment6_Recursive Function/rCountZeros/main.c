#include <stdio.h>
int rCountZeros1(int num);
void rCountZeros2(int num, int *result);
int main()
{
    int number, result;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rCountZeros1(): %d\n", rCountZeros1(number));
    rCountZeros2(number, &result);
    printf("rCountZeros2(): %d\n", result);
    return 0;
}
int rCountZeros1(int num)
{
    /* Write your program code here */
    if (num<10){
        if (num==0) return 1;
        else return 0;
    }
    else{
        if (num%10==0){
            return rCountZeros1(num/10)+1;
        }
        else{
            return rCountZeros1(num/10);
        }
    }
}
void rCountZeros2(int num, int *result)
{
    /* Write your program code here */
    *result=rCountZeros1(num);
}
