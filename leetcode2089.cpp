#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int >vt ;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == target)
            {
                vt.push_back(i);
            }
        }
        return vt ;
    }
};