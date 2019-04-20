#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int func(char s[100]){
    int a[26];
    int c=0;
    for (int i=0;i<26;i++){
        a[i]=0;
    }

    for (int i=0;i<strlen(s);i++){
        a[s[i]-'a']++;
        if (a[s[i]-'a']>=2){
            return 0;
        }

    }
    for (int i=0;i<26;i++){
        if (a[i]==1){
            c++;
        }
    }

    if (c==1){
        return 1;
    }

    int m,n;
    for (int k=0;k<26;k++){
        if (a[k]==1){
            m=k;
            for (n=k;n<k+c;n++){
                if (a[n]!=1){
                    return 0;
                }
            }
            return 1;
    }
}
}

int main()
{
    int N;
    char s[100][100];
    cin>>N;
    for(int i=0;i<N;i++){

        scanf("%s",&s[i]);

    }
    for(int i=0;i<N;i++){

        if (func(s[i])==1){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<'\n';
        }

    }

    return 0;
}
