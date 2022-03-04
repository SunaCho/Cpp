#include <iostream>
#include <string>
using namespace std;

int main() {
    string k;
    string alphabet="abcdefghijklmnopqrstuvwxyz";

    cin>>k;
    for (int i=0; i<26; i++) { 
        cout<<(int)k.find(alphabet[i])<<" ";
    }
    return 0;

}