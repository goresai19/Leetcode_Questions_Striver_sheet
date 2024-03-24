class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size(),maxi=INT_MIN;
        for(int i=0;i<n;i++){
            map<char,int> m;
            for(int j=i;j<n;j++){
                m[s[j]]++;
                if(m[s[j]]>2){
                    break;
                }
             maxi=max(maxi,j-i);
            }
            
        }
        return maxi+1;      
    }
};