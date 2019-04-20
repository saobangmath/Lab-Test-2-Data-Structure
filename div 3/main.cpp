#include <iostream>

using namespace std;

int main()
{
    int N;
    int q[200001];
    int  p[200001];
    long long total=0;
    bool marked[200001];
    cin>>N;
    long long sum=0;
    for (int i=0;i<N-1;i++){
        cin>>q[i];
        total+=(N-1-i)*q[i];
        sum+=i;
    }
    sum+=(2*N-1);
    if ((sum-total)%N==0 &&  N<=(sum-total)<=N*N){
        p[0]=(sum-total)/N;

        marked[p[0]]=true;
    }
    else{
        cout<<-1;
        return 0;
    }
    int j=1;
    while (j<N){
        p[j]=p[j-1]+q[j-1];
        if (p[j]<=0 || p[j]>N){
            break;
        }
        else if (marked[p[j]]){
            break;
        }
        else{
            marked[p[j]]=true;
            j++;
        }
    }
    if (j==N){
        for(int u=0;u<N;u++){
            cout<<p[u]<<" ";
        }
    }
    else{
        cout<<-1;
    }


}
