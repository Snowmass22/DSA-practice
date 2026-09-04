/* Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0. */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int size;
    
    cout<<"Enter size";
    cin>>size;
    cout<<"enter elements:";
    vector<int>nums;
    int ele;
    for(int i=0;i<size;i++){
        cin>>ele;
        nums.push_back(ele);
    }
    sort(nums.begin(),nums.end());
    vector<vector<int>>result;
    for(int i=0;i<size;i++){
        int left=i+1;
        int right=nums.size()-1;
        if(i>0&&nums[i]==nums[i-1]){
            continue;
        }
        while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            if(sum<0){
                left++;
            }
            else if(sum>0){
                right--;
            }
            else{
                vector<int>re={nums[i],nums[left],nums[right]};
                result.push_back(re);
                left++;
                right--;
                while(left<right && nums[left]==nums[left-1]){
                    left++;
                }
                while(left<right&&nums[right]==nums[right+1]){
                    right++;
                }


            }
        }

    }
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<" ";
        
    }

    return 0;
}