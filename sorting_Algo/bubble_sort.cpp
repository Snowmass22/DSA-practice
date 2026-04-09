//time complexity :
// worst case= O(n**2),best case=O(1)
#include <iostream>
using namespace std;
void bubble_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n,arr[n];
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
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}