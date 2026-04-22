#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no of row and columns (n=m)"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter elements in the matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int primary_sum=0,secondary_sum=0;
    int diagonal_sum=0;
    if(n%2==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                    primary_sum=primary_sum+arr[i][j];
                }
                if(j==n-i-1){
                    secondary_sum=secondary_sum+arr[i][j];

                }
            }
        }
        diagonal_sum=primary_sum+secondary_sum;
        cout<<diagonal_sum;
        
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                    primary_sum=primary_sum+arr[i][j];
                }
                if(j==n-i-1){
                    secondary_sum=secondary_sum+arr[i][j];

                }
            }
        }
        diagonal_sum=primary_sum+secondary_sum-arr[n/2][n/2];
        cout<<diagonal_sum;

    }
    return 0;
}