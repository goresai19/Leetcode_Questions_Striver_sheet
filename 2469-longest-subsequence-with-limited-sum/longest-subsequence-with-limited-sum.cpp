class Solution {
public:
    int getIndex(vector<int>arr, int target){
        int s=0,e=arr.size()-1,n=arr.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(mid==n && arr[mid]<=target){
                return mid+1;
            }
            else if(arr[mid]<=target && arr[mid+1]>target){
              return mid+1;
            }
            else if(arr[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return 0;
    }
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int sum=0,n=nums.size(),m=queries.size();
        vector<int> pre_sum(n,0);
        vector<int> ans(m);

        for(int i=0;i<n;i++){
            int j=0;
            sum+=nums[i];
            pre_sum[i]=sum;
        }
        for(int i=0;i<m;i++){
            ans[i]=(getIndex(pre_sum,queries[i]));
        }
       return ans;
   }
};