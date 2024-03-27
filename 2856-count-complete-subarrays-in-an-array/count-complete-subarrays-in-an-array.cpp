class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size(),count=0;
        set<int> s;
        for(int i:nums){
            s.insert(i);
        }
        int distinct=s.size();
        for(int i=0;i<n;i++){
            set<int> temp;
            for(int j=i;j<n;j++){
                temp.insert(nums[j]);
                if(temp.size()==distinct){
                    count++;
                }
                if(temp.size()>distinct){
                    break;
                }
            }
        }
        return count;
    }
};