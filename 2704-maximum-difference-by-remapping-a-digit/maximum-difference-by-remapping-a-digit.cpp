class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        int n=s.size();
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            string temp_min=s,temp_max=s;
            for(int j=0;j<n;j++){
                if(s[j]==s[i]){
                  temp_min[j]='0';
                  temp_max[j]='9';
                }
            }
            mini=min(mini,stoi(temp_min));
            maxi=max(maxi,stoi(temp_max));
        }
        return maxi-mini;
    }
};