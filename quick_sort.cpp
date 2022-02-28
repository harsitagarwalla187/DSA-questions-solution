#include<iostream>

using namespace std;

int partition(int a[],int si,int ei) {

    int count=0,l=si+1;

    while(l<=ei) {
        if(a[l]<=a[si]) {
            count++;
        }
        l++;
    }
    int c=si+count;
    int temp=a[si];
    a[si]=a[c];
    a[c]=temp;
    int i=si, j=ei;
    while(i<=c-1 && j>=c+1) {
        if(a[i]<=a[c]) {
            i++;
        } else if(a[j]>=a[c]) {
            j--;
        } else {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }

    return c;

}

void qs(int a[], int si, int ei) {
    if(si>=ei){
        return;
    }
    int c=partition(a,si,ei);
    qs(a,si,c-1);
    qs(a,c+1,ei);
}

int main() {

    int n;
    cin>>n;

    int *p=new int[n];
    for(int i=0;i<n;i++) {
        cin>>p[i];
    }

    qs(p,0,n-1);

    for(int i=0;i<n;i++) {
        cout<<p[i]<<' ';
    }

    delete [] p;

    return 0;
}