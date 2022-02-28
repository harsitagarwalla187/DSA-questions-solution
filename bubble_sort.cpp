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

     int arr[100],n;

    cout<<"Enter the length of Array:"<<endl;
    cin>>n;

    cout<<"Enter the Array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubblesort(arr,n);    

    cout<<"Sorted Array is :"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    

    return 0;
}