#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/decode-the-string2444/1

class Solution{
public:
    string decodedString(string s){
      stack<pair<string,int>> st;
      int num = 0;
      string ans = "";

      for(auto &i:s){
        if(isdigit(i)) num = num*10 + (i - '0');
        else if(isalpha(i)) ans += i;
        else if(i == '['){
          st.push({ans,num});
          ans = "";
          num = 0;
        }
        else{
          int rep = st.top().second - 1;
          string sub = ans;
          while(rep--) ans += sub;
          ans = st.top().first + ans;
          st.pop();
        }
      }

      return ans;
    }
};