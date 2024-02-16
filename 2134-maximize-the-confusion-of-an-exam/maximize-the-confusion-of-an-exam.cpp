class Solution {
public:
    int findAns(string answerKey,int k,char c){
        int ans=0,j=0,n=answerKey.size(),maxi=0;
        //
        for(int i=0;i<n;i++){
            if(answerKey[i]!=c){
                k--;
            }
            while(k<0 && i>j){
                if(answerKey[j]!=c){
                  k++;
                }
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
         return maxi;

    }
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(findAns(answerKey,k,'T'),findAns(answerKey,k,'F'));
    }
};