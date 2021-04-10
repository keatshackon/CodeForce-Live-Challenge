#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, m, q;
	cin >> t;

	while (t--) {
		cin >> n;

		map<int, int> m1;

		vector<int> v;

		while (n--) {
			cin >> q;
			v.push_back(q);
			++m1[q];
		}

		for (auto q : m1) {
			if (q.second == 1) {
				for (int i = 0; i < v.size(); i++ ) {
					if (q.first == v[i]) {
						cout << i + 1 << "\n";
						break;
					}
				}
			}
		}

	}
	return 0;
}