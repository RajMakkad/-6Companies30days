#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/#

class Solution {
	public:
		int CountWays(string str){
            int n = str.length();
		    int dp[n + 1] = {0};

            dp[0] = 1;

            for(int i = 1;i<=n;i++){
                if(str[i - 1] != '0') dp[i] = dp[i - 1];
                if(i>1 and str[i - 2] != '0'){
                    ll num = (str[i - 2] - '0') * 10 + (str[i - 1] - '0');
                    if(num>=1 and num<=26) dp[i] += dp[i - 2];
                }
            }

            return dp[n];
		}
};