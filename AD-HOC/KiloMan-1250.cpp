#include <bits/stdc++.h>

using namespace std;


int main() {
	int n; cin >> n;

	while (n--) {
		int t, ans = 0; cin >> t;
		vector<int> heights(t);

		for (int i = 0; i < t; i++)
			cin >> heights[i];

		string line; cin >> line;

		for (int i = 0; i < t; i++)
			if (line[i] == 'S' and heights[i] <= 2)
				ans++;
			else if (line[i] == 'J' and heights[i] > 2)
				ans++;

		cout << ans << '\n';
	}

	return 0;
}