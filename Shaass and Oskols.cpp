//http://codeforces.com/contest/294/problem/A
#include <bits/stdc++.h>
using namespace std;

struct shot {
    int wireNumber, birdPos;
};

int main(){

    int n,m;
    cin>>n;
    int a[n];
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    cin>>m;
    shot shots[m];
    for (int k = 0; k <m ; ++k) {
        cin>>shots[k].wireNumber;
        cin>>shots[k].birdPos;
    }

    int jumpUp, jumpDown;

    for (int i = 0; i <m ; ++i) {
        jumpUp=shots[i].birdPos -1;
        jumpDown=a[shots[i].wireNumber-1]-shots[i].birdPos;
        a[shots[i].wireNumber-1]=0;
        if(shots[i].wireNumber-2>=0 && shots[i].wireNumber<n){
            a[shots[i].wireNumber-2]+=jumpUp;
            a[shots[i].wireNumber]+=jumpDown;
        } else if (shots[i].wireNumber-2<0){
            a[shots[i].wireNumber]+=jumpDown;
        } else if (shots[i].wireNumber>=n){
            a[shots[i].wireNumber-2]+=jumpUp;
        }else continue;
    }


    for (int j = 0; j <n ; ++j) {
        cout<<a[j]<<endl;
    }

}
