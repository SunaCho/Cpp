#include <iostream>
using namespace std;

int main(void) { 
    int input, cnt=0;
    int arr[42]={0};

    for (int i=0; i<10; i++) {
        cin>>input;
        if(!arr[input%42]++)
            cnt++;
    }
    cout<<cnt;
    return 0;
}