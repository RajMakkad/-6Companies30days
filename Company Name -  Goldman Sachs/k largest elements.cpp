#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1/

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int,vector<int>,greater<int>> q; 
        vector<int> kthLargest;

        for(int i = 0;i<n;i++){
            q.push(arr[i]);
            while(q.size() > k) q.pop();
        }

        while(q.size()){
            kthLargest.push_back(q.top());
            q.pop();
        }

        reverse(kthLargest.begin(),kthLargest.end());
        return kthLargest;
	}
};