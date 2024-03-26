class Solution {
public:
 int getPow(int n){
        int count=0;
        while(n!=1){
            (n%2==0)?(n=n/2):(n=(3*n)+1);
            count++;
            }
         return count;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> v;
        for(int i=lo;i<=hi;i++){
           v.push_back({getPow(i),i});
        }
        
        sort(v.begin(),v.end());
        return v[k-1].second;
    }
};