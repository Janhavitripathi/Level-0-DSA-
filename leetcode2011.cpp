#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int  finalValueAfterOperations(vector<string>& operations) {
        int  X =0,temp;
        for( int i = 0;i<operations.size() ;i++)
        {  
          if (operations[i]=="X++")
          {
             temp =X ;
             X= temp;
            X++ ; 
          }
            else if (operations[i]=="++X")
          {
             temp =X+1 ;
             X= temp;
          }
           else if (operations[i]=="X--")
          {
             temp =X ;
             X =temp ;
            X-- ; 
          }
          else if (operations[i]=="--X")
          {
             temp =X-1 ;
            X = temp ; 
          }
          else 
          {
            temp =-1 ;
          }

        }
        return X ;
    }
};