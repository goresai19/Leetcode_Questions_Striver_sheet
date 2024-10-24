class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
     set<string> s(bannedWords.begin(),bannedWords.end());
     map<string,int>m;
     for(string temp:message){
        m[temp]++;
     }
     set<string>::iterator it;
     int sum=0;
     for(it=s.begin();it!=s.end();it++){
        sum+=m[*it];
        if(sum>1){
            return true;
        }
     }

     return false;     
    }
};