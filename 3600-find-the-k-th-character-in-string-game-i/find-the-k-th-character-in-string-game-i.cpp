class Solution {
public:
    char kthCharacter(int k) {
       string ans = "a";
        while (ans.size() < k) {
            string temp = ans;
            for (char c : ans) {
                temp += char(c + 1);
            }
            ans = temp;
        }
        return ans[k - 1];
    }
};