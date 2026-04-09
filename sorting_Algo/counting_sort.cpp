#include <iostream>
using namespace std;
void count_sort(int arr[],int n){
    int freq[10000]={0};
    int minval=INT_MAX;
    int maxval=INT_MIN;
    for(int i=0;i<n;i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=minval,j=0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
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
        cout<<arr[i]<<" ";
    }
    cout<<"sorted array:"<<endl;
    count_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;

}