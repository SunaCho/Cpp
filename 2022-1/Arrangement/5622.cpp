#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr;
    int num[]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    int res=0;
    getline(cin,arr);

    for (int i=0; arr[i]!='\0'; i++)    res+=num[arr[i]-'A'];
    cout<<res;

    return 0;
}