#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testScore+examScore)/2 */
};
//double average(struct student students[50]);
int main()

{   struct student students[50];
    int i=0;
    double sum=0;
    puts("Enter student name:");
    gets(students[i].name);
    while (strcmp(students[i].name,"END")!=0){
        puts("Enter test score:");
        scanf("%lf",&students[i].testScore);
        puts("Enter exam score:");
        scanf("%lf",&students[i].examScore);
        students[i].total=(students[i].testScore+students[i].examScore)/2;
        sum+=students[i].total;
        printf("Student %s total = %.2f\n",(students+i)->name,(students+i)->total);
        i++;
        puts("Enter student name:");
        scanf("\n");
        gets(students[i].name);

    }

    double average=(i==0)?0:(sum/(i));
    printf("average(): %.2f\n",average);
    return 0;
}
