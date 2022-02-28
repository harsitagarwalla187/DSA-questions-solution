#include<iostream>

using namespace std;

  void bubblesort(int arr[],int n) {

        for(int j=0;j<n-1;j++) {
            for(int i=0;i<n-1-j;i++) {
                if(arr[i]>arr[i+1]) {
                    int temp = arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }

    }

int main () {

    int l,arr[100];

    cout<<"Enter the length of array:"<<endl;
    cin>>l;

    cout<<"Enter the array:"<<endl;
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }

    bubblesort(arr,l);

    for (int i = 0; i < l; i++){
        cout<<arr[i]<<' ';
    }

    return 0;

    }