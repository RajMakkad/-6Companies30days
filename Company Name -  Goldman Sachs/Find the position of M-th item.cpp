#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        int ans = (K + M - 1)%N;
        if(ans == 0) return N;
        else return ans;
    }
};