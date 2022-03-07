#include <iostream>
using namespace std;
int main() {
    string s;
    int lst[27]={0};
    cin>>s;
    for (int i=0; i<s.length(); i++) {
        if (s[i]>=97)
            s[i]=s[i]-32;
        lst[s[i]-65]++;
    }

    int max=0;
    int index;
    int cnt=0;

    for (int i=0; i<26; i++) {
        if (max<lst[i]) {
            max=lst[i];
            index=i;
        }
    }

    for (int i=0; i<26; i++) {
        if (i!=index) {
            if (max==lst[i])
                cnt++;
        }
    }

    if (cnt !=0) {
        cout<<"?\n";
    }
    else {
        cout<<(char)(index+65)<<"\n";
    }

    return 0;
}