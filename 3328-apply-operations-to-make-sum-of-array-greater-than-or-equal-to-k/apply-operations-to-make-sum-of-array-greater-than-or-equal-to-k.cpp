class Solution {
public:
    int minOperations(int k) {
        int maxi=INT_MAX;
        
        for(int i=1;i<=k;i++){
            int div=0,sum=0;
            (k%i==0)?(div=k/i):(div=(k/i)+1);
            sum=(div-1)+(i-1);
            maxi=min(maxi,sum);
        }
        return maxi;
    }
};