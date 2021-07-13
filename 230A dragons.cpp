#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // strength (s) && dragons (n)
    ll s, n;
    // dragon's stength (i) && bonus (x)
 	pair<int, int> myarr[n];

 	cin >> s >> n;
 	for (ll i=0; i<n; i++){
 		cin >> myarr[i].first >> myarr[i].second;
 	}	
 	sort (myarr, myarr+n);
 	for (ll i=0; i<n; i++){
 		if (s <= myarr[i].first){
 			cout << "NO";
 		}
 		s += myarr[i].second;
 	}
 	cout << "YES"; 

	return 0;
}
