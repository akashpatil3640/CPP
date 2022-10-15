#include<bits/stdc++.h>
using namespace std;
int h_ans(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }
        int cnt=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            cnt=0;
            int curr=nums[i];
            if(mp.find(curr-1)==mp.end()){
                int mine=curr;
                cnt++;
                while(mp.find(curr+1)!=mp.end()){
                    curr++;
                    cnt++;
                }
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
int main(){
  int n;
  cin>>n;
  vector<int>arr;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans=h_ans(arr);
  cout<<ans<<endl;
}
