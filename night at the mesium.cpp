//https://codeforces.com/contest/731/problem/A
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(){
    string s;
    cin>>s;
    int first, second, res=0;
    first=(int)'a';
    second= (int)s[0];

    for (int i = 0; i <(int)s.length() ; i++) {
        if(abs(second-first)<=12) res +=abs(second-first);
        else res += 26 -abs(second-first);
        first=second;
        second=(int)s[i+1];
    }

    cout<<res;
    return 0;
}