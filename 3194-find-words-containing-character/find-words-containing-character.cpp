class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int cnt=-1;
        for(string s:words){
            cnt++;
            if(count(s.begin(),s.end(),x))
            ans.push_back(cnt);
        }
        return ans;
    }
};