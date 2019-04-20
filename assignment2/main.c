#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
 int power;
 float number, result=-1,t;
for (t=1;t<=3;t++){
 printf("Enter the number and power: \n");
 scanf("%f %d", &number, &power);
 printf("power1(): %.2f\n", power1(number, power));
 power2(number,power,&result);
 printf("power2(): %.2f\n", result);}
 return 0;
}
float power1(float num, int p)
{   double res=1;
    int i;
    if (p>0){
    for(i=1;i<=p;i++){
        res*=num;
        }return res;
    }
    else if (p<0){

        for(i=p;i<=-1;i+=1){
            res=(res)/(num);
        }
        return res;
    }
    else{
        return 1;
    }

 /* Write your program code here */
}
void power2(float num, int p, float *result)
{ *result=power1(num,p);
 /* Write your program code here */
}
