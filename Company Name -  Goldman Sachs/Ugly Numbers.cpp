#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ull unsigned long long int

// https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/

class Solution{
public:	
	ull getNthUglyNo(int n) {
	    ull i(1),i2(0),i3(0),i5(0);

		vector<ull> ugly(n);
		ugly[0] = 1;

		ull nm2 = 2*ugly[i2],nm3 = 3*ugly[i3],nm5 = 5*ugly[i5];

		for(int i = 1;i<n;i++){
			ull nexti = min({nm2,nm3,nm5});
			ugly[i] = nexti;

			if(nexti == nm2){
				i2++;
				nm2 = 2*ugly[i2];
			}
			if(nexti == nm3){
				i3++;
				nm3 = 3*ugly[i3];
			}
			if(nexti == nm5){
				i5++;
				nm5 = 5*ugly[i5];
			}
		}

		return ugly[n - 1];
	}
};
