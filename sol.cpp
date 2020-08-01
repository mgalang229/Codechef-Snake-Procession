#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {
		int r;
		cin >> r;
		char a[r];
		for (int i = 0; i < r; i++) {
			cin >> a[i];
		}
		int t = 0;
		for (int i = 0; i < r; i++) {
			if (a[i] == 'H') {
				t++;
			}
			if (a[i] == 'T') {
				t++;
			}
		}
		bool ok;
		if (t >= 2) {
			ok = true;
		} else {
			ok = false;
		}
		int total = 0;
		for (int i = 0; i < r; i++) {
			if (isalpha(a[i])) {
				total++;
			}
		}
		bool checker = false;
		int head = 0, tail = 0;
		for (int i = 0; i < r; i++) {
			if (a[i] == 'H') {
				head++;
				checker = true;
			}
			if (a[i] == 'T') {
				if (checker) {
					tail++;
					checker = false;
				} else {
					break;
				}
			}
		}
		if (head + total == 0 && !ok) {
			cout << "Valid";
		} else if (ok && head + tail == total && head == tail) {
			cout << "Valid";
		} else {
			cout << "Invalid";
		}
		cout << '\n';
	}
	return 0;
}
