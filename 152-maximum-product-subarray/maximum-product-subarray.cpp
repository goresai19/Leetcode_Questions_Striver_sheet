class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
       for(int i=0;i<n;i++){
        int product=nums[i];
        for(int j=i+1;j<n;j++){
            product*=nums[j];
            maxi=max(maxi,product);
            maxi=max(maxi,nums[j]);
        }
       }
       return maxi;
    }
};