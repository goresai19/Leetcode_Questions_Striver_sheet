class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi=0,n=nums.size(),j=0;
         for(int i=0;i<n;i++){
             if(nums[i]==0){
                 k--;
             }
             while(k<0){
                 if(nums[j]==0) k++;
                 j++;
             }
             maxi=max(maxi,i-j+1);
         }
        return maxi;
    }
};