#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    int num, sum, cnt;
    double avg, ratio;

    int n;
    cin>>n;

    for (int j=0; j<n; j++) {
        sum=0;
        cnt=0;
        cin>>num;
        if (num==0)
            break;
        
        int *score=new int[num];
        if (!score)
            return 0;

        for (int i=0; i<num; i++) {
            cin>>score[i];
            sum+=score[i];
        } 

        avg=(double)sum/num;

        for (int i=0; i<num; i++) {
            if (avg<score[i])
                cnt++;
        }

        ratio=((double)cnt/num)*100;
        cout.precision(3);
        cout<<fixed<<ratio<<"%"<<endl;
    }

    return 0;
}