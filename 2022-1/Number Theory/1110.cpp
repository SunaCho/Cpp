#include <iostream>
using namespace std;

int main() {
    int num, first, second, sum;
    int res=0;
    int cnt=0;

    cin>>num;

    if (num<10)
        num*=10;
    res=num;

    while(1) {
        first=res/10;
        second=res%10;
        sum=first+second;
        res=(second*10)+(sum%10);
        cnt++;

        if (num==res)   break;
    }
    cout<<cnt;

    return 0;

}