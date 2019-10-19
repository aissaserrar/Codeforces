//http://codeforces.com/contest/732/problem/A

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(){
    int k,r,i=1;
    cin>>k>>r;
    while(true){
        if ((k*i)%10==0 || (k*i)%10==r ){
            break;
        }
        else i++;
    }
    cout<<i;
    return 0;
}

