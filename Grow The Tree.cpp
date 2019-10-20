//http://codeforces.com/contest/1248/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long x=0, y=0;
    cin>>n;
    int array[n];
    for (int i = 0; i <n ; ++i) {
        cin>>array[i];
    }
    sort(array, array+n);

    for (int j = 0; j <n/2 ; ++j) {
        x+=array[j];
    }

    for (int j = n/2; j <n ; ++j) {
        y+=array[j];
    }

    cout<< (x*x) + (y*y);

    return 0;
}