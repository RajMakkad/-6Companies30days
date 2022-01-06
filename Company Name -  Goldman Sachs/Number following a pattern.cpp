#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

class Solution{   
public:
    string printMinNumberForPattern(string S){
        int n = S.length();
        string ans = "";
        int i = 0;

        while(i<n and S[i] == 'D') i++;
        ans += ('1' + i);

        for(i = 0;i<n;i++){
            if(S[i] == 'D') ans += (ans.back() - 1);
            else{
                char c = ('2' + i);
                int k = i + 1;
                while(k<n and S[k] == 'D') k++;
                c += (k - i - 1);
                ans += c;
            }
        }

        return ans;
    }
};