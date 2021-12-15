#include<bits/stdc++.h>

using namespace std;

int main () {

    int N=0, a=1, P=0, res=0 ;

    cout<<"Enter a binary number: ";
    cin>>N;

    while (N != 0) {

        int pow=1;
        a = N % 10;
        N /= 10;
        P++;
        for(int i=1; i<P;i++) {

        pow = pow * 2 ;

        }
        res = res + a * pow ;
    }

    cout<<res<<endl;

    system("pause");
    return 0;
}