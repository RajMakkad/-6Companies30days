#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int

// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

string encode(string src){     
    int n = src.length() + 1;
    int count = 0;
    char c = src[0];
    src += '1';
    string ans = "";

    for(int i = 0;i<n;i++){
        if(c == src[i]) count++;
        else{
            ans += c;
            ans += to_string(count);
            c = src[i];
            count = 1;
        }
    }
    
    return ans;
} 