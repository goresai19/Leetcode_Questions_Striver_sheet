class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        char x1=coordinate1[0],x2=coordinate2[0],y1=coordinate1[1],y2=coordinate2[1];
        if((abs(x1-x2)%2==0 && abs(y1-y2)%2==0)||(abs(x1-x2)%2==1 && abs(y1-y2)%2==1))
        return true;

        return false;
    }
};