#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int sum = 0;
        int missing = 0;
        int repeating = 0;

        for(int i = 0;i<n;i++){
            sum += (i + 1 - abs(arr[i]));
            int index = abs(arr[i]) - 1;
            if(arr[index] < 0) repeating = abs(arr[i]);
            arr[i] = -arr[i];
        }

        missing = sum + repeating;
        arr[0] = missing;
        arr[1] = repeating;
        return arr;
    }
};