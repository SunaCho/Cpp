#include <iostream>
using namespace std;

int lst[15][15]={0};
int main() {
    for (int j=0; j<15; j++) {
        lst[0][j]=j+1;
    }
    for (int a=1;a<15;a++) {
        for (int b=0;b<15;b++) {
            for (int c=0;c<=b;c++) {
                lst[a][b]+=lst[a-1][c];
            }
        }
    }
    int t;
    cin>>t;
    for (int i=0;i<t;i++) {
        int k;
        int n;
        cin>>k;
        cin>>n;
        cout<<lst[k][n-1]<<"\n";
    }
}