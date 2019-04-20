#include <stdio.h>
#include <string.h>
#define SIZE 10
#define INIT_VALUE 999
void printNames(char nameptr[][80], int size);
void readNames(char nameptr[][80], int *size);
int findTarget(char *target, char nameptr[][80], int size);
int main()
{
   char nameptr[SIZE][80], t[40];
   int size, result = INIT_VALUE;
   int choice;

   printf("Select one of the following options: \n");
   printf("1: readNames()\n");
   printf("2: findTarget()\n");
   printf("3: printNames()\n");
   printf("4: exit()\n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            readNames(nameptr, &size);
            break;
         case 2:
            printf("Enter target name: \n");
            scanf("\n");
            gets(t);
            result = findTarget(t, nameptr, size);
            printf("findTarget(): %d\n",  result);
            break;
         case 3:
            printNames(nameptr, size);
            break;
      }
   } while (choice < 4);
   return 0;
}
void printNames(char nameptr[][80], int size)
{
   /* Write your program code here */
   int i;
   for(i=0;i<size;i++){
       printf("%s ",nameptr[i]);
   }
}
void readNames(char nameptr[][80], int *size)
{   int i;
   /* Write your program code here */
   puts("Enter size:");
   scanf("%d",size);
   printf("Enter %d names:\n",*size);
    for (i=0;i<*size;i++){
        scanf("%s",&nameptr[i]);
    }

}
int findTarget(char *target, char nameptr[][80], int size)
{   int i;
   /* Write your program code here */
   for(i=0;i<size;i++){
       //if (nameptr[i]==target) return i;//(This is wrong as this is just compare 2 address of both the first char of nameptr[i] and target)
       if (!strcmp(nameptr[i],target)){
            printf("%s\n",*(nameptr+i));
            printf("%s\n",target);
            return i;}
   }return -1;
}
