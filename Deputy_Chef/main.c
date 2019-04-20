#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,T,i;
    int j;
    int a[100],d[100];
    scanf("%d",&T);
    for (i=0;i<T;i++){
        scanf("%d",&N);
        for (j=1;j<=N;j++){
            scanf("%d ",a+j);
        }
        for (j=1;j<=N;j++){
            scanf("%d ",d+j);
        }
        int max=-1;
        for (j=1;j<=N;j++){
            if (d[j]>a[(j+1)%N]+a[(j-1)%N] && j>1){
                max=(max<d[j])?d[j]:max;
            }
            else{
                if (d[1]>a[2]+a[N]){
                    max=(max<d[j])?d[j]:max;
                }
            }
        }
        printf("%d\n",max);
    }
}

