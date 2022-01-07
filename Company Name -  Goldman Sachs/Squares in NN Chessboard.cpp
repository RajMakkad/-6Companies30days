#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        long long ans = n*(n + 1)*(2*n + 1)/6LL;
        return ans;
    }
};