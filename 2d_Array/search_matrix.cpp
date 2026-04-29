// we are given a matrix whose elements are in descending order (rows and columns)
// goal to is find the given element .. not found than return -1
//time complexity should be mlogn or less than it
//--------------------------------------------------------------------------------------//

// solution: use staircase method///
//asgin a variable to the right top most and left down most of the matrix//
//traverse according to it: //
#include <iostream>
using namespace std;
void search(int matrix[4][4],int element){
 int m=4;
 int n=4;
 int i=0;
 int j=m-1;
 int flag=0;
 while(i<n && j>=0){
    if(matrix[i][j]==element){
        cout<<i<<j;
        flag=1;
        break;
    }
    else if(matrix[i][j]>element){
        j--;
    }
    else{
        i++;
    }
 }
 if(flag==0){
    cout<<"not found";
 }
 
}
int main(){
    int matrix[4][4]={{10,20,30,40},
{15,25,35,45},
{27,29,37,48},
{32,33,39,50}};
search(matrix,0);
return 0;
}