#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int i;
    for (i=1;num>0;i++) {
        num=num-i;
    }

    if (i%2==1) {
        cout<<i+num-1<<"/"<<1-num<<endl;
    }

    else if (i%2==0) {
        cout<<1-num<<"/"<<i+num-1<<endl;
    }
}