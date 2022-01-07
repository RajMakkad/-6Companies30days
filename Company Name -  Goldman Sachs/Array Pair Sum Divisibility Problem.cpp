#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution {
  public:
    bool canPair(vector<int> nums, int k){
        vector<int> rem(k,0);
        for(auto &i:nums){
            if(rem[(k - i%k)%k]) rem[(k - i%k)%k]--;
            else rem[i%k]++;
        }

        for(auto &i:rem) if(i) return false;
        return true;
    }
};