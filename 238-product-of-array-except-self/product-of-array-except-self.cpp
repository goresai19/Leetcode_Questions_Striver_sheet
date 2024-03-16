class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size(),pre_pro=nums[0];
        
        vector<int> ans(n,1);
        ans[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i]=ans[i+1]*nums[i];
        }
        int last=ans[1];

        for(int i=1;i<n-1;i++){
            ans[i]=ans[i+1]*pre_pro;
            pre_pro*=nums[i];
        }

        ans[0]=last;
        ans[n-1]=pre_pro;
        
        return ans;
    }
};