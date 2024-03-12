class Solution {
public:
    int minCost(string colors, vector<int>& arr) {
        int ans=0,sum=arr[0],maxi=arr[0],n=arr.size();
        for(int i=1;i<n;i++){
            if(colors[i]==colors[i-1]){
                sum+=arr[i];
                maxi=max(maxi,arr[i]);
             }
            else{
                ans+=sum-maxi;
                sum=arr[i];
                maxi=arr[i];
               }
        }
        if(colors[n-1]==colors[n-2]){
            ans+=sum-maxi;
        }
        return ans;
    }
};