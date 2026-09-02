/* //You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.

Example 1
Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:
Input: nums = [1,1]
Output: [1,2] */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums;
    cout<<"enter size :";
    int size; cin>>size;
    cout<<"enter elements :";
    int ele;
    for(int i=0;i<size;i++){
        cin>>ele;
        nums.push_back(ele);
    }
    sort(nums.begin(),nums.end());
    int duplicate;
    int missing;
    if(nums[0]!=1){
        missing=1;
    }
    else if(nums[size-1]!=size){
        missing=size;
    }
    for(int i=1;i<size;i++){
        if(nums[i]==nums[i-1]){
            duplicate=nums[i];
        }
        else if(nums[i]>nums[i-1]+1){
            missing=nums[i-1]+1;
        }
    }
    cout<<"missing:"<<missing;
    cout<<"duplicate:"<<duplicate;
    return 0;

}
