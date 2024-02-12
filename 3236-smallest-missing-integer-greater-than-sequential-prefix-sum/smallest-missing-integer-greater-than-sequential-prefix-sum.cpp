class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0],n=nums.size();
          set<int> s{nums.begin(),nums.end()};  

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
                continue;
            }
            break;
        }
        while(s.count(sum)){
            sum++;
        }
        return sum;

        
    }
};