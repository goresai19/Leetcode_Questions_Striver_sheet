#include<bits/stdc++.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int t;
        int nums2[nums.size()];
        for(int i=0;i<nums.size();i++)
            nums[i]=nums[i]*nums[i];
       sort(nums.begin(),nums.end());
    return nums;
    }
};