#include <iostream>
using namespace std;

int main() {
    int N;
    int tmp=1, cnt=6;
    int res=1;
    cin>>N;

    while(1) {
        if(tmp>=N) {
            cout<<res<<endl;
            return 0;
        }
        tmp+=cnt;
        cnt+=6;
        res++;
    }
}