class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero=0,n=nums.size();
        long long product=1;
        vector<int> ans(n,0);
        vector<int> pre(n,0);
        vector<int> suf(n,0);

        for(int i=0;i<n;i++){
            product*=nums[i];
            pre[i]=product;
        }
        product=1;

        for(int i=n-1;i>=0;i--){
            product*=nums[i];
            suf[i]=product;
        }
       ans[0]=suf[1];
       ans[n-1]=pre[n-2];
        for(int i=1;i<n-1;i++){
              ans[i]=pre[i-1]*suf[i+1];
        }

        return ans;
    }
};