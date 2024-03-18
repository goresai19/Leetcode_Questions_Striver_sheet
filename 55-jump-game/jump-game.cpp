class Solution {

public:
    bool canJump(vector<int>& nums) {
    int n=nums.size(),maxi=0;
       for(int i=0;i<n;i++){
            if(nums[i]==0 && i>=maxi){
                break;
            }
            maxi=max(maxi,i+nums[i]);
       }
       cout<<maxi<<endl;
      return maxi>=n-1;
    }
};