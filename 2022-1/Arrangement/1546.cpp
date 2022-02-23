#include <iostream>
using namespace std;

int main(void) {
    int cnt=0;
    double max=0;
    double sum=0;
    cin>>cnt;
    double array[cnt];
    
    for (int i=0;i<cnt;i++) {
        cin>>array[i];
        if (max<array[i])
            max=array[i];
    }

    for (int i=0;i<cnt;i++) {
        array[i]=array[i]/max*100.0;
        sum+=array[i];
    }

    cout<<sum/(double)cnt;
    return 0;
}