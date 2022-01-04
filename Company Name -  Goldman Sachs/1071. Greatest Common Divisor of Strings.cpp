#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://leetcode.com/problems/greatest-common-divisor-of-strings/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        
        if(str1 + str2 == str2 + str1) return str1.substr(0,__gcd(n,m));
        else return "";
    }
};