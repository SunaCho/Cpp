#include<iostream>
using namespace std;

int main() {
    int N, X;
    cin>>N>>X;

    int lst[N];

    for(int i=0; i<N; i++)  cin>>lst[i];
    for(int j=0; j<N; j++)
        if(lst[j]<X)    cout<<lst[j]<<" ";
    return 0;
}