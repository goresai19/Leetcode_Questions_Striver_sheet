class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size(),m=haystack.size();
        if(m==n && haystack==needle)
        return 0;
        for(int i=0;i<=m-n;i++){
            if(haystack.substr(i,n)==needle)
            return i;
        }
        return -1;
    }
};