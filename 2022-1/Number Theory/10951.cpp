#include <iostream>
using namespace std;
int main(void) {
    int a,b;
    while(1) {
        cin>>a>>b;
        if(cin.eof()==true)
            break;
        else
            cout<<a+b<<endl;
    }
    return 0;
}