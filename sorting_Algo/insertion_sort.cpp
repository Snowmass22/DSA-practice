#include <iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(arr[prev]>curr && prev>=0){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }
}
int main(){
        int n,arr[n];
        cout<<"insertion sort";
    cout<<"enter size of the array";
    cin>>n;
    cout<<"enter elements in the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"sorted array:"<<endl;
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}