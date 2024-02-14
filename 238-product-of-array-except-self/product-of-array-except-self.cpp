class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero=0,n=nums.size();
        long long product=1;
        vector<int> ans(n,0);
        for(int i:nums){
            (i==0)?(zero++):(product*=i);
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0 && zero>1)
            ans[i]=0;
            if(nums[i]==0 && zero==1){
                ans[i]=product;
            }
            if(nums[i]!=0 && zero==0){
                ans[i]=product/nums[i];
            }
            if(nums[i]!=0 && zero!=0){
                ans[i]=0;
            }
        }
        return ans;
    }
};