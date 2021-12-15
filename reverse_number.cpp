#include<bits/stdc++.h>

using namespace std;

int main () {

    int n=0,rev=0,str=0;

    cout<<"Enter a number: ";
    cin>>n;

    while(n!=0) {
        str = n%10;
        n=n/10;
        rev=rev*10 + str;

    }

    cout<<rev<<endl;

    system("pause");
    return 0;
}