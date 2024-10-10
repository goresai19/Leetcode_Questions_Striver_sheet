class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int cnt = count(nums.begin(),nums.end(),x),tempcnt=0,n=nums.size(),qsize=queries.size();
        vector<int> v(qsize,-1);
        map<int,int> m;
        if(cnt==0){
            return v;
        }
        
        for(int i=0;i<n;i++){
           if(nums[i]==x){
            m[tempcnt]=i+1;
            tempcnt++;
           }
           
          if(tempcnt==cnt)
           break;
        }

        for(int i=0;i<qsize;i++){
            if(m[queries[i]-1]==0){
             v[i]=-1;
            }
            else{
                v[i]=m[queries[i]-1]-1;
            }
        }
        return v;
    }
};