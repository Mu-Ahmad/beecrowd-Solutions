#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl

using namespace std;

void stale_flippant() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	stale_flippant();

	int t, val; cin >> t;
	map<int, int> frequency;

	while (t--) {
		cin >> val;

		frequency[val]++;
	}

	for (auto p : frequency)
		cout << p.first << " aparece " << p.second << " vez(es)\n";


	return 0;
}