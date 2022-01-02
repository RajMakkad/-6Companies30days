#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int

// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans = 0;
        int start = 0;
        ll p = 1;

        for(int end = 0; end<n ; end++){
          p = p*a[end];
          while(start <= end and p >= k){
            p /= a[start++];
          }

          ans += (end - start + 1);
        }

        return ans;
    }
};