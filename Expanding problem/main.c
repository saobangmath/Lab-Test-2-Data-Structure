#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    char *str;
    scanf("%s",&str);

    printf("The new String is:");
    expand(&str);
    return 0;
}
void expand(char *str){
    int i=0;
    while (i<strlen(str)){
        if (!(isalpha(str[i]))){
            if (('0'<=*(str+i) && *(str+i)<='9')){
                int j;
                for (j=0;j<(*(str+i)-'0');j++){
                    printf("%c",*(str+i+1));
                }
                i+=2;
            }
            else{
                i+=1;
            }
        }
        else{
            printf("%c",*(str+i));
            i+=1;
        }
    }
}
