#include <stdio.h>
void rReverseDigits(int num, int *result);
int res=0,rem;
int main()
{
 int result=0, number;

 printf("Enter a number: \n");
 scanf("%d", &number);
 rReverseDigits(number, &result);
 printf("rReverseDigits(): %d\n", result);
 return 0;
}
void rReverseDigits(int num, int *result)
{
 /* Write your code here */
 if (num){
    rem=num%10;
    res=res*10+rem;
    rReverseDigits(num/10,result);
 }
 else{
    *result=res;
    }

}
