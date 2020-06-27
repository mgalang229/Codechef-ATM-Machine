#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[100];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) {
			if (k - a[i] >= 0) {
				k -= a[i];
				cout << 1;
			} else {
				cout << 0;
			}
		}
		cout << '\n';
	}
	return 0;
}
