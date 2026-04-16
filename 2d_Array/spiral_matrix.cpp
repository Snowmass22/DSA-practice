// print top-right-bottom-left
#include <iostream>
using namespace std;
void spiral_matrix(int matrix[4][4],int n,int m){
    int start_row=0;
    int start_col=0;
    int end_row=n-1;
    int end_col=m-1;


    while(start_row<=end_row && start_col<=end_col){
        //top
        for(int i=start_col;i<=end_col;i++){
            cout<<matrix[start_row][i]<<" ";
        }
        //right
        for(int j=start_row+1;j<=end_row;j++){
            cout<<matrix[j][end_col]<<" ";
        }
        //bottom
        for(int k=end_col-1;k>=start_col;k--){
            if(start_row==end_row){
                break;
            }
            cout<<matrix[end_row][k]<<" ";
        }
        //left
        for(int l=end_row-1;l>=start_row+1;l--){
            if(start_col==end_col){
                break;
            }
            cout<<matrix[l][start_col]<<" ";
        }
        start_row++;
        start_col++;
        end_row--;
        end_col--;

    }
    cout<<endl;

}
int main(){
    int matrix[4][4]={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}};
    spiral_matrix(matrix,4,4);

    return 0;

}