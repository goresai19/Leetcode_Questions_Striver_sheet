class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        int n=s.size(),k=0;
        string temp_min=s,temp_max=s;
        char mini;
        while(k<n && s[k]=='9'){
            k++;
        }
        mini=s[k];
        cout<<mini<<endl;
        if(k==n){
            return num;
        }
        for(int i=0;i<n;i++){
           if(s[i]==mini)
           temp_min[i]='9';
           if(s[i]==s[0])
           temp_max[i]='0';
        }
        
        int max=stoi(temp_min),min=stoi(temp_max);

        return max-min;
    }
};