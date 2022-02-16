#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin>>n;
    char tmp;
    int sum=0;
    for (int i=0; i<n; i++) {
        cin>>tmp;
        sum+=(tmp-'0');
    }
    cout<<sum;
    return 0;
}