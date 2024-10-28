class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int c=nums.size(),sum=0;
        for(int i=0;i<c;i++){
           m[nums[i]]=i;
        }
        for(int i=0;i<c;i++){
            if(m[target-nums[i]] && (i!=m[target-nums[i]]))
            return {i,m[target-nums[i]]};
        }
        return {};
    }
};