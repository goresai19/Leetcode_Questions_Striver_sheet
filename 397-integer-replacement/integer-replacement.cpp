class Solution {

public:
    long long getOperation(long long n){
        if(n==1){
            return 1;
        }
        while(n!=1){
            if(n%2==0){
                return getOperation(n/2)+1;
            }
            else{
                return min(getOperation(n+1),getOperation(n-1))+1;
            }
        }
        return 0;
    }
    int integerReplacement(int n) {
        int count=0;
        long long mini=0;
        
        count+=getOperation(n);

        return count-1;
    }
};