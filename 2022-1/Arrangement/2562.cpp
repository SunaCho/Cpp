#include <iostream>
using namespace std;
int main() {
    int lst[9];
    int max=0, index=0;
    for (int i=0;i<9;i++) {
        cin>>lst[i];
        if (max<lst[i]){
            max=lst[i];
            index=i;
        }
    }
    cout<<max<<endl<<index+1;
}