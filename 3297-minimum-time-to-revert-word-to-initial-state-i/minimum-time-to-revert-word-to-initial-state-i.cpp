class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        string temp=word;

        int ans=0,n=word.size(),count=0;
        while(ans!=1){
        count++;
        int temp1=1;
        temp.erase(0,k);
        int i=0,start=0,ts=temp.size();
       //  cout<<temp<<endl;
         for(int i=0;i<ts;i++){
            if(temp[i]!=word[i]){
                temp1=0;
            }
         }
         if(temp1==1){
            ans=1;
         }
        }
        return count;
    }
};