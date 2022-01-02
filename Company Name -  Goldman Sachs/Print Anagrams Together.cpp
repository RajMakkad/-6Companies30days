#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#
class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        int n = string_list.size();
        map<string,vector<int>> groups;
        
        for(int i = 0;i<n;i++){
            string s = string_list[i];
            sort(s.begin(),s.end());
            groups[s].push_back(i);
        }

        vector<vector<string>> anagrams(groups.size());
        int in = 0;
        for(auto i:groups){
            for(auto index:i.second) anagrams[in].push_back(string_list[index]); 
            in++;
        }

        return anagrams;
    }
};

