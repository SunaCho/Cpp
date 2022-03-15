#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int tmp;
    while(1) {
        cin>>a>>b>>c;
        if (a==0)   break;
        if (max(a,b)==a) 
            if(max(a,c)==a) {
                if(a*a==b*b+c*c)    cout<<"right"<<'\n';
                else    cout<<"wrong"<<'\n';
            }
            else {
                if(a*a+b*b==c*c)    cout<<"right"<<'\n';
                else    cout<<"wrong"<<'\n';
            }
        else
            if(max(b,c)==b) {
                if(a*a+c*c==b*b)    cout<<"right"<<'\n';
                else    cout<<"wrong"<<'\n';
            }
            else {
                if(a*a+b*b==c*c)    cout<<"right"<<'\n';
                else    cout<<"wrong"<<'\n';
            }
    }
}