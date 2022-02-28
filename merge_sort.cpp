#include<iostream>

using namespace std;

void merge(int a[],int si,int mid,int ei) {

    int *b=new int[ei];
    int i=si,j=mid+1,k=si;

    // comparing the elements of two subarrays and storing in the temporary array b
    while(i<=mid && j<=ei){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        } else{
            b[k]=a[j];
            j++;
            k++;
        }
    }

    // storing remaining elements of first subarray
    while(i<=mid){
        b[k]=a[i];
        k++;
        i++;
    }

    // storing remaining elements of second array
    while(j<=ei){
        b[k]=a[j];
        k++;
        j++;
    }

    // copying the elements of temporary array to original array
    for(int i=si;i<=ei;i++) {
        a[i]=b[i];
   }

    delete [] b;
}

void merge_sort(int a[],int si,int ei) {
        if(si>=ei){return;}

        int mid =(si+ei)/2;

        // sorting first subarray
        merge_sort(a,si,mid);

        //sorting other subarray 
        merge_sort(a,mid+1,ei);       

        // concating the above two subarray
        merge(a,si,mid,ei);
}

int main() {

    // length of array
    int n;
    cin>>n;

    int *p=new int[n];

    // taking array input
    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    // calling function for sorting
    merge_sort(p,0,n-1);

    // output
    for(int i=0;i<n;i++){
        cout<<p[i]<<' ';   
    }

    delete [] p;

    return 0;
}