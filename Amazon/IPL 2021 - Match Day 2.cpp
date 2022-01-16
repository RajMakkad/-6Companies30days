#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k){
      vector<int> ans;
      deque<int> q;
      for(int i = 0;i<n;i++){
        while(q.size() and arr[i] >= arr[q.back()]) q.pop_back();
        q.push_back(i);

        if(i >= k -1) ans.push_back(arr[q.front()]);
        if(i - k + 1 == q.front()) q.pop_front();
      }

      return ans;
    }
};
