class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m;
        int n=s.size();
        for(char c:s){
            m[c]++;
        }
        for(int j=0;j<n;j++){
            if(m[s[j]]==1){
                return j;
            }
        }
        return -1;
    }
};