#include <bits/stdc++.h>

using namespace std;

int main()
{   int N;
    int a[2001];
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>a[i];
    }

    int o[1001];
    int e[1001];
    int beg1=0,beg2=0;
    int odd=0,even=0;

    for (int t=0;t<N;t++){
        if (a[t]%2==1){
            o[beg1]=a[t];
            beg1++;
            odd++;
        }
        else{
            e[beg2]=a[t];
            beg2++;
            even++;
            }
        }
        int sum=0;

        if (odd==even){
            cout<<0;
        }

        else if (odd>even){
            sort(o,o+odd);

            for (int x=0;x<odd-even-1;x++){
                sum+=o[x];
                }
                cout<<sum;
        }


        else{
            sort(e,e+even);


            for (int x=0;x<even-odd-1;x++){
                sum+=e[x];
                }
                cout<<sum;
                }


        return 0;
}
