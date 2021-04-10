#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, i, j, k;
	char q;

	cin >> t;

	while (t--) {
		cin >> n;
		vector<vector<char>> v;
		int f = 0;

		int x1 = 0, y1 = 0;
		int x2 = 0, y2 = 0;

		for (int i = 0; i < n; i++) {

			vector<char> temp;

			for (int j = 0; j < n; j++) {
				cin >> q;

				if (q == '*' and f == 0) {
					x1 = i;
					y1 = j;
					f = 1;
				} else if (q == '*' and f == 1) {
					x2 = i;
					y2 = j;
				}

				temp.push_back(q);
			}
			v.push_back(temp);
		}

		if (x1 == x2) {
			if (x1 + 1 < n) {
				v[x1 + 1][y1] = '*';
				v[x2 + 1][y2] = '*';
			} else {
				v[x1 - 1][y1] = '*';
				v[x2 - 1][y2] = '*';
			}
		}

		else if (y1 == y2) {
			if (y1 + 1 < n) {
				v[x1][y1 + 1] = '*';
				v[x2][y1 + 1] = '*';
			} else {
				v[x1][y1 - 1] = '*';
				v[x2][y1 - 1] = '*';
			}
		}

		else if (y1 > y2) {
			v[x1][y2] = '*';
			v[x2][y1] = '*';
		} else {
			v[x1][y2] = '*';
			v[x2][y1] = '*';
		}

		for (auto q : v) {
			for (auto w : q) {
				cout << w;
			}
			cout << "\n";
		}

	}


}