class Solution {
public:
    vector<string> stringSequence(string target) {
        string temp="",curr="";
        vector<string> ans;
        // ans.push_back(temp);
        // for(int i=1;i<=target.length();i++){
        
        //    cout<<"temp "<<target.substr(0,i)<<endl;
        // }
        for(int i=0;i<target.length();i++){
            char initial='a';
            temp+=initial;
            ans.push_back(temp);
            while(temp[i]!=target[i]){
            temp[i]++;
            ans.push_back(temp);
            }   
        }
        
       
        return ans;
    }
};