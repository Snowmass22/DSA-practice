#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string1";
    cin>>s;
    string s1;
    cout<<"enter string2";
    cin>>s1;
    int flag=0;
    if(s.length()!=s.length()){
        cout<<"not anagram";
        flag=1;
    
    }
    else{
        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!=s1[i]){
                cout<<"not anagram";
                flag=1;
                break;
            }
        }
        
    }
    if(flag==0){
        cout<<"anagram";
    
    }
    return 0;

}