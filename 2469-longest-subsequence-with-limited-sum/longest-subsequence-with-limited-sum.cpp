class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int sum=0,n=nums.size(),m=queries.size();
        vector<int> pre_sum(n,0);
        vector<int> ans(m,0);

        for(int i=0;i<n;i++){
            sum+=nums[i];
            pre_sum[i]=sum;
        }
        for(int i=0;i<m;i++){
            int j=0;
            while(j<n && pre_sum[j]<=queries[i]){
                j++;
            }
            ans[i]=j;
        }
       return ans;
   }
};