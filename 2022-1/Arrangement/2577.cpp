#include <iostream>
using namespace std;

int main(void) {
    int a,b,c;
    int lst[10]={0};
    cin>>a>>b>>c;
    int res=a*b*c;

    while(res!=0) {
        lst[res%10]+=1;
        res/=10;
    }

    for(int i=0; i<10; i++) {
        cout<<lst[i]<<endl;
    }

    return 0;
}