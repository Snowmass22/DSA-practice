#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string";
    cin>>s;
    int i=0,j=s.length()-1;
    int flag=0;
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
            flag=1;
        }
        else{
            flag=0;
            cout<<"not palindrome";
            break;
        }
    }
    if(flag==1){
        cout<<"palindrome";
    }
    return 0;
}