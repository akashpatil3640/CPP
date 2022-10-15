//Given an integer array nums, return any one triplet [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

//Notice that the solution set must not contain duplicate triplets.
//Input: nums = [-1,0,1,2,-1,-4]
//Output: [-1,-1,2]
#include<bits/stdc++.h>
using namespace std;
<vector<int> h_ans(vector<int>& nums) {
        sort(nums.begin(),nums.end());//sort the array to apply two pointer
        int n=nums.size();
        for(int i=0;i<n-2;i++){//consider the case 0 0 0 0
            if(i==0 || ((nums[i]!=nums[i-1]) && i>0)){
                int low=i+1;
                int high=n-1;

                int hit=nums[i];//sum 1
                
                while(low<high){
                    int sum=nums[high]+nums[low];//sum 2

                    if(sum+hit==0){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        return ans;

                        while(low<high && nums[low]==nums[low+1])low++;//-1 -1 2 0 0
                        while(low<high && nums[high]==nums[high-1])high--;

                        low++;
                        high--;
                    }else if(sum+hit<0){
                        low++;
                    }else if(sum+hit>0){
                        high--;
                    }
                }
            }
        }
        return {-1};
    }
int main(){
  vector<int>arr;
  for(int i=0;i<arr.size();i++){
    cin>>arr[i];
  }
  vector<int>ans=h_ans(arr);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i];
  }
}
