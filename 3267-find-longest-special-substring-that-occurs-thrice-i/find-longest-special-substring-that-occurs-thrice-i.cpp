class Solution {
public:
    int maximumLength(string s) {
        int n=s.size(),maxi=2,maxLen=-1;
        map<string,int> m;
        for(int i=0;i<n;i++){  
            string ans="";
            ans+=s[i];
            m[ans]++;
            for(int j=i+1;j<n;j++){
               if(s[j]!=s[i])    
                 break;
               ans+=s[j];
               m[ans]++;
            }
        }
        for(auto it=m.begin();it!=m.end();it++){
           if(maxi<it->second){
            int c=it->first.length();
                maxLen=max(maxLen,c);
           }
    
        }
        return maxLen;
    }
};