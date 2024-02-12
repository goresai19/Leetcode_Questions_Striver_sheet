class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0],n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
                continue;
            }
            break;
        }
        sort(nums.begin(),nums.end());
        for(int i:nums)
        {
            if(i==sum){
                sum++;
            }
        }
        return sum;
    }
};