#include <iostream>
using namespace std;

int lst[1000001];
int MIN=-1000001;
int MAX=1000001;
int n;

int main(void) {
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>lst[i];
        if (MIN<lst[i])
            MIN=lst[i];
        if (MAX>lst[i])
            MAX=lst[i];
    }

    cout<<MAX<<' '<<MIN;
}