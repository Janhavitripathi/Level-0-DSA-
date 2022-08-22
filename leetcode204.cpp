#include<bits/stdc++.h>
using namespace std;
//TC-->O(n^2) SC-->O(n^2)
class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool>prime(n+1,true);

        prime[0] = prime[1]=false;

        for(int i=2;i<n;i++)
        {
            if(prime[i]){
                cnt++;

                for(int j=2*j;j<n;j+i)
                {
                    prime[j]=0;
                }
            }
        }
        return cnt;
    }
};