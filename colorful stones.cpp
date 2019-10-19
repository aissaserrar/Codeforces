//http://codeforces.com/contest/265/problem/A
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(){
    string s1, s2;

    cin>> s1;
    cin>>s2;
    int pos=0;

    for (int i = 0; i <(int)s2.length() ; ++i) {
        if(s2[i]==s1[pos]){
            pos++;
        }
        else continue;
    }
    cout<<pos+1;

    return 0;
}

