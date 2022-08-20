#include<bits/stdc++.h>
using namespace std;
// TC--->O(n) SC---->O(n)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int i=0; int j=0; int k=0; int m=nums1.size(); int n=nums2.size();
        vector<double> temp(m+n);
        while(i<m && j<n){
            if(nums1[i]<nums2[j])
                temp[k++]=nums1[i++];
            else
                temp[k++]=nums2[j++];
        }
        while(i<m)
            temp[k++]=nums1[i++];
        while(j<n)
            temp[k++]=nums2[j++];
        if((m+n)%2==0)
            return (temp[(m+n)/2]+ temp[(m+n)/2 -1])/2;
        return temp[(m+n)/2];
    }
    };