#include<iostream>

using namespace std;

    void insertionsort(int arr[],int n) {

        for(int i=1;i<n;i++) {
            int current=arr[i];
            int j;
            for(j=i-1;j>=0;j--) {
                if(current<arr[j]) {
                    arr[j+1]=arr[j];
                } else {
                    break;
                }
            }
            arr[j+1]=current;
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

    insertionsort(arr,n);    

    cout<<"Sorted Array is :"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
    return 0;

}