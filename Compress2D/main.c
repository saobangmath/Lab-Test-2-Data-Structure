#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    /* Write your program code here */
    int i,j,count,target;
    for (i=0; i<rowSize; i++)
    {
        j=0;
        count=1;
        while (j<colSize)
        {
            target=data[i][j];
            while (data[i][j]==data[i][j+1] && j+1<colSize)
            {
                ++j;
                count++;
            }

            printf("%d %d ",target,count);
            ++j; /*to increment to the first different num to the target and reset the target*/
            count=1; /*reset the count variable*/
        }
        printf("\n");
    }
}
