#include <iostream>
using namespace std;

bool check(int n);

int main() {
    int n;
    cin>>n;

    int ans=0;
    for(int i=1; i<=n; i++) {
        if (check(i)==true) ans+=1;
    }
    cout<<ans;
    return 0;
}

bool check(int n){ 
    int d1, d2, d3;
    d1=n/100;
    d2=(n/10)%10;
    d3=n%10;

    int diff1, diff2;
    diff1=d1-d2;
    diff2=d2-d3;

    if (n<100 || diff1==diff2)  return true;
    else    return false;
}