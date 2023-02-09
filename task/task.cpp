/*
 * =====================================================================================
 *
 *       Filename:  task.cpp
 *
 *    Description:  My competitive programming file 
 *
 *        Version:  1.0
 *        Created:  02/06/2023 08:46:59 PM
 *       Revision:  none
 *       Compiler:  GNU G++20 11.2.0 (64 bit, winlibs)
 *
 *         Author:  brendan
 *   Organization:  Columbia
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n; cin >> n;
	
	if (n & 1) {
		cout << "YES\n";
		cout << 1 << " " 2*n << "\n";

		int s = 2, e = 2*n - 2;

		for (int i = 0; i < n / 2; i++) {
			cout << s << " " << e << "\n";
			
		}
	}

	return;
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}

