class Solution {
public:
    bool doesAliceWin(string s) {
        int count=0;
        for(char ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                count++;
                if(count>0)
                break;
            }
        }
        if(count==0)
        return false;

        return true;
    }
};