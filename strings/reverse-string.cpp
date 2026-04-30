#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    cin>>s;
    for(int i=0;i<s.length();i++){
        int j=s.length()-1;
        swap(s[i],s[j]);
        j--;
    }
    cout<<s;
    return 0;

    

}