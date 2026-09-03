/* Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings. */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string>s;
    cout<<"enter elements in the array";
    cout<<"enter size of the vector";
    int size;
    cin>>size;
    string ss;
    for(int i=0;i<size;i++){
        cin>>ss;
        s.push_back(ss);
    }
    string sss;
    for(int i=0;i<size;i++){
        char currchar=s[0][i];
        for(int j=1;j<size;j++){
            if(s[j][i]!=currchar||i==s[j].size()){
                 sss= s[0].substr(0,i);
            }

        }
    }
    cout<<sss;
    
    return 0;
}