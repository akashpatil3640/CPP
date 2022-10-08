//Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

//A subarray is a contiguous non-empty sequence of elements within an array.

//Input: nums = [1,1,1], k = 2
//Output: 2

int main(){
  int n;
  cin>>n;
  vector<int>arr;
  for(int i=0;i<n;i++){
  cin>>arr[i];
  }
  if(n==0){return 0;}
        
        unordered_map<int,int> mp; 
        int currSUM = 0;
        int i = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            currSUM += nums[i];            
            if(currSUM == k){cnt += 1;}            
            if(mp.find(currSUM-k)!=mp.end()){cnt += mp[currSUM-k];}
            mp[currSUM]++;
        }
  cout<<cnt<<endl;
}
