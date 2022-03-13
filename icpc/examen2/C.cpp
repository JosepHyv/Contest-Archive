#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int e1,e2;
	cin>>e1>>e2;
	vector<string> eA(e1);
	vector<string> eB(e2);
	map<string,int> mPalabras;
	map<string,int> mA;
	map<string,int> mB;
	for (auto& x : eA)
		cin>>x;
	for (auto& x : eB)
		cin>>x;
	for (int i = 0 ; i < e1 ; i++) {
		for (int j = 0 ; j < e2 ; j++) {
			mPalabras[eA[i] + eB[j]]++;
			}
		}
	for (int i = 0 ; i < e1 ; i++) {
		for (int j = 0 ; j < e2 ; j++) {
			if (mPalabras.find(eA[i]+eB[j]) != mPalabras.end() && mPalabras[eA[i] + eB[j]] > 1) {
				mA[eA[i]]++;
				mB[eB[j]]++;
				}
			}
		}
	int ans1 = 0, ans2 = 0;
	for (auto x : eA) {
		if (mA.find(x) == mA.end()) {
			ans1++;
		}
		}
	for (auto x : eB) {
		if (mB.find(x) == mB.end()) {
			ans2++;
		}
	}
	cout<<ans1<<" "<<ans2<<"\n";
	
}
