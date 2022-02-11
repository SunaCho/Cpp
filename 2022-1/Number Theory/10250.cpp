#include <iostream>
using namespace std;

int main() {
    int t, h, w, n;
    int res;
    cin>>t;
    for (int i=0; i<t; i++) {
        cin>>h>>w>>n;

        if (n%h==0) {
            res=100*h+(n/h);
        }
        
        else {
            res=100*(n%h)+(n/h)+1;
        }

        cout<<res<<endl;
    }
}