#include <iostream>
using namespace std;

int main() {
    int n,m,tmp,res;
    cin>>n;
    m=n/5;
    while (m>=0) {
        tmp=0;
        res=0;
        if (m>0) {
            tmp=n-5*m;
            res=m;
        }
        else
            tmp=n;
        
        res+=tmp/3;
        tmp=tmp%3;

        if (tmp==0) {
            cout<<res;
            break;
        }
    m--;
    }
    if (tmp!=0)
        cout<<-1;
}