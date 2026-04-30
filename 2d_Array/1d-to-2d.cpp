#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"enter count and elements in 1d array";
    int a;
    cin>>a;
    vector<int> original(a); // Correct: Initialize vector with 'a' elements
    for(int i=0;i<a;i++){
       cin>>original[i];
    }
    int m,n;
    cout<<"enter rows and columns of 2d array:";
    cin>>m>>n;
    
    int idx=0;
    if(m*n==a){
        vector<vector<int>> matrix(m, vector<int>(n)); // Correct: Initialize 2D vector with m rows and n columns
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){ // Correct: Inner loop iterates up to 'n' (columns)
                matrix[i][j]=original[idx];
                idx++;
            }
        }
        // Print the matrix only if it was successfully created
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"not possible";
    }
    return 0;
}