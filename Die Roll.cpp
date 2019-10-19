//http://codeforces.com/contest/9/problem/A

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int max(int a, int b){
    if(a>b) return a;
    else return b;
}

int main(){
   int n, m, c,d=6;
   cin>>n>>m;

   c=6-max(n,m)+1;
   int i=6;
    while (i>1){
        if(c%i==0 && d%i==0){
            c=c/i;
            d=d/i;
            break;
        }
        i--;
    }
    cout<<c<<"/"<<d;

    return 0;
}

