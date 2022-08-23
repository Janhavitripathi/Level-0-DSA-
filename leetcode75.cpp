//Dutch nationalflag algorithm 
//TC--> O(N) , SC--> O(1)
/*LOGIC --->
put  0 in [0 to low-1]
put  2 in [high+1, n] 
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo =0;
        int high =nums.size()-1;
        int mid =0;
        while(mid<=high)
        {
            switch(nums[mid]){
                    //if element at mid is 0 .
                case 0:
                    swap(nums[lo++],nums[mid++]);
                    break;
                    //if element at mid is 1 .
                case 1:
                    mid++;
                    break;
                     //if element at mid is 1 .
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
                
        }
    }
};