#include <stdio.h>
#define Tai 1000000
int main()
{
 int total, count, lines, input;
 double average;
 int i;
 printf("Enter number of lines: \n");
 scanf("%d", &lines);
 /* Write your program code here */
 for (i=1;i<=lines;i++){
    printf("Enter line %d (end with -1):\n",i);
    count=total=0;
    scanf("%d",&input);
    while (input!=-1){
        count+=1;
        total+=input;
        scanf("%d",&input);
    }
    average=float(total)/count*Tai;
    printf("Average = %2f\n",average);
 }
 return 0;
}
