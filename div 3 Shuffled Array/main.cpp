#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int a[200001];
    for (int i=0;i<N;i++){
        cin>>a[i];
    }

    int inc=0,dec=0;
    int increase[200001];
    int decrease[200001];
    sort(a,a+N);
    int track=0,prev;
    for (int i=0;i<N;i++){
        if (i==0){
            increase[0]=a[0];
            inc=1;
            prev=a[0];
            track++;
        }
        else{
            if (a[i]==prev){
                track++;
                if (track==3){
                    cout<<("NO");
                    return 0;
                }
                else{
                    decrease[dec]=a[i];
                    dec++;
                }
            }
            else{
                increase[inc]=a[i];
                inc++;
                prev=a[i];
                track=1;
            }
        }
    }
        cout<<"YES"<<"\n";
        cout<<inc<<"\n";
        for (int x=0;x<inc;x++){
            cout<<increase[x]<<" " ;
        }
        cout<<"\n"<<dec<<"\n";
        for (int x=dec-1;x>=0;x--){
            cout<<decrease[x]<<" " ;
        }

return 0;
}
