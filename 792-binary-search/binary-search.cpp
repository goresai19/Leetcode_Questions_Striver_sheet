class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums[0]!=target && nums.size()==1)
        return -1;
        int i=0,j=nums.size();
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
               j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return -1;
    }
};