#include<bits/stdc++.h>

using namespace std;

int main () {

    int N=0, result=1, power=1, i=1;

    cout<<"Enter a number and its power: ";
    cin>>N>>power;

    while(i<=power) {
        result=result*N;
        i++;
    }

    cout<<"Answer: "<<result;

    return 0;
}