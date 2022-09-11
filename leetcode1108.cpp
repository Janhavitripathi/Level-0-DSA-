#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        vector<char>vt ;
        for(int i =0;i<address.size() ;i++)
        {
            if(address[i]=='.')
            {
                vt.push_back('[');
                vt.push_back('.');
                vt.push_back(']');
            }
            else{
                vt.push_back(address[i]) ;
            }
        }
    
       string result = "";
        for(int i=0;i<vt.size();++i){
            char a = vt[i];
            result+=a;
        }
        return result; 
    }
};