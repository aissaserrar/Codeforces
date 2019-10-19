//http://codeforces.com/contest/228/problem/A

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(){
   int array[4], count=0;
   cin>>array[0]>>array[1]>>array[2]>>array[3];

    for (int i = 0; i <3 ; ++i) {
        for (int j = i+1; j <4 ; ++j) {
            if (array[i]==array[j] && array[i]!=0){
                count++;
                array[j]=0;
            }
        }
    }
    cout<<count;

    return 0;
}

