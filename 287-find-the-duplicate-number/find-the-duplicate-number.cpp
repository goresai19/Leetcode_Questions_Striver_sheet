class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
     int low=1,high=nums.size()-1,mid;

     while(low<high){
        int cnt=0;
        mid=low+(high-low)/2;
        cout<<mid<<endl;

        for(int i:nums){
            if(i<=mid){
                cnt++;
            }
        }

        if(cnt<=mid){
             low=mid+1;
        }
        else{
            high=mid;
        }
     }

     return low;

    }
};