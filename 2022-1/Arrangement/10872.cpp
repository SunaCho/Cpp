#include<iostream>
using namespace std;

int ft(int n) {
    if (n>2) n*=ft(n-1);
    return n;
}

int main(void) {
    int num, res=1;
    cin>>num;
    if (num!=0) res=ft(num);
    cout<<res;
    return 0;
}