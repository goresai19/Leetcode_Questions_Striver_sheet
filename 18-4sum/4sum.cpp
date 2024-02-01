class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        if(nums.size()<4)
        return ans;
        if(nums[0]>target  && nums[0]>0)
        return ans;
         
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int l=j+1,h=nums.size()-1;
                long long sum=nums[i]+nums[j];
                while(l<h){
                  if(sum+nums[l]+nums[h]==target){
                      s.insert({nums[i],nums[j],nums[l],nums[h]});
                      l++,h--;
                  }
                  else if(sum+nums[l]+nums[h]<target){
                      l++;
                  }
                  else{ 
                  h--;
                  }
                }
                
            }
        }
        for(auto itr:s){
            ans.push_back(itr);
        }
        return ans;
    }
};