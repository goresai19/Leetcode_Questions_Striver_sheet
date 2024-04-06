class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        string ans="";
        stack<char> st;
        for(int i=0;i<n;i++){
             if(!st.empty() && ((st.top()==tolower(s[i]) || (st.top()==toupper(s[i]))) && st.top()!=s[i])){
                st.pop();
             }
             else{
                st.push(s[i]);
             }
        }
        if(st.empty()) return ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
       
        reverse(ans.begin(),ans.end());
        return ans;
    }
};