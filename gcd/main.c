#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
 int x,y,i,result=-1;
 for (i=1;i<=3;i++){
 printf("Enter 2 numbers: \n");
 scanf("%d %d", &x, &y);
 printf("gcd1(): %d\n", gcd1(x, y));
 gcd2(x,y,&result);
 printf("gcd2(): %d\n", result);}
 return 0;
}
int gcd1(int num1, int num2)
{ int j;
    for (j=num1;j>=1;j--){
        if ((num1%j==0) && (num2%j==0)){
            return j;}
    }
 /* Write your program code here */
}
void gcd2(int num1, int num2, int *result)
{ *result=gcd1(num1,num2);
 /* Write your program code here */
}
