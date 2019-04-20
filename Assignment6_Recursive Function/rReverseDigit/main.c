#include <stdio.h>
void rReverseDigits(int num, int *result);
int numofDigit(int n);
int reverse(int num);
int main()
{
    int result=0, number;

    printf("Enter a number: \n");
    scanf("%d", &number);
    rReverseDigits(number, &result);
    printf("rReverseDigits(): %d\n", result);
    return 0;
}
int numofDigit(int n)
{
    int res=0;
    while (n>0){
        n=n/10;
        res++;
    }return res;

}

int reverse(int num){

    if (num < 10)
    {
        return num;
    }
    else{
    //    int rem=(num%10);
      //  int res=reverse(num/10);
        //res+=(rem*pow(10,numofDigit(res)));
        //return res;
    int count=0;
    while (num>0){
        count=count*10+(num%10);
        num=(num-num%10)/10;
    }
    return count;
    }
}
void rReverseDigits(int num, int *result)
{
    /* Write your code here */
    *result=reverse(num);
}
