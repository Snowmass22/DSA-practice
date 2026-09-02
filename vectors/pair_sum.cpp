#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
   
   
    cout<<"enter number of elements in the array:";
    int size;cin>>size;
    cout<<"Enter elements in the array";
    int ele;
    for(int i=0;i<size;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"enter the target element:";
    int target;cin>>target;
    int st=0,end=size-1;
    while(st<end){
        if(arr[st]+arr[end]==target){
            cout<<st<<end;
            break;
        }
        else if(arr[st]+arr[end]<target){
            st++;
        }
        else{
            end--;
        }
    }
   
    return 0;


}