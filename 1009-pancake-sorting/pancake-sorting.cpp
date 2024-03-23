class Solution {
public:
    void flip(int j,vector<int>& arr){
         int i=0;
         while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
         }
    }
    
    bool sorted(vector<int> arr)
    {
        int n=arr.size()-1;
        while(n>0){
            if(arr[n]<arr[n-1])
            return false;
            n--;
        }
        return true;
    }


public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
       for(int i=n;i>0;i--){
        if(sorted(arr)){
            break;
        }
        for(int j=0;j<n;j++){
            if(arr[j]==i){
            flip(j,arr);
            ans.push_back(j+1);
             break;
          }
        }
        flip(i-1,arr);
        ans.push_back(i);
       } 
    return ans;
    }
};