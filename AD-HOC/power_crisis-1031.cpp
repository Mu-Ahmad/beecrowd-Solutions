#include <bits/stdc++.h>

using namespace std;

int solve(int regions, int interval){
	list <int> l(regions);

	iota(l.begin(), l.end(), 1);

	while(l.size() != 1){
		l.pop_front();

		for (int i=1; i<interval; i++){
			l.push_back(l.front());
			l.pop_front();
		}
	}

	return l.front();
}

int main(){
	int regions;

	while(cin >> regions and regions){
		int interval = 0;

		while (solve(regions, ++interval) != 13) {}

		cout << interval << '\n';
	}

	return 0;
}