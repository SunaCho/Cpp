#include <iostream>
using namespace std;
int sum(int n) { 
    int res=n;
    while(n>0) {
        res=res+n%10;
        n=n/10;
    }
    return res;
}

int main(void) {
    int lst[10001]={0,}, tmp;
    for(int i=0; i<10001; i++) {
        tmp=sum(i);
        if(tmp<10001)   lst[tmp]=1;
    }

    for(int i=0; i<10001; i++) {
        if(lst[i]!=1)   cout<<i<<endl;
    }

    return 0;
}