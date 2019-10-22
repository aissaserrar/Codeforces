//http://codeforces.com/contest/709/problem/A
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,b,d, collectWaste=0, count=0;
    cin>>n>>b>>d;
    int a[n];
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    for (int j = 0; j <n ; ++j) {
        if (a[j]<=b){
            collectWaste+=a[j];
        }
        if (collectWaste>d){
            collectWaste=0;
            count++;
        }
    }

    cout<<count;

}
