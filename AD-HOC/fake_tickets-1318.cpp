#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, t;

	while(cin >> n >> m and (n or m)){
		vector <int> tickets(n + 1, 0);
		vector <int> counted(n + 1, 0);
		int ans = 0;

		while(m--){
			cin >> t;

			if (tickets[t] and !counted[t]) {
				ans++;
				counted[t] = true;
			}
			else tickets[t] = 1;
		}

		cout << ans << '\n';
	}

	return 0;
}