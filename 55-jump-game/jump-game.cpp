class Solution {
public:
   bool canHeJump(vector<int>& nums,int n){
        int temp=n;
        while(temp>=0 && nums[temp]!=0){
            temp--;
        }
        if(temp==-1)
        return true;
        else{
            int count=1;
            for(int i=temp-count;i>=0;i--){
                if(nums[i]>count){
                    return canHeJump(nums,i);
                }
                count++;
            }
        }
        return false;
   }
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return true;
        return canHeJump(nums,n-2);

    }
};