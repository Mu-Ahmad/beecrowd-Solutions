#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n and n){
		vector<int> wave(n);
		for (int i=0; i<n; i++) cin >> wave[i];

		int peak = 0;
		for (int i = 0; i<n; i++){
			// counting valleys
			if (wave[(i-1+n)%n] > wave[i] 
			and wave[(i+1)%n] > wave[i]) peak++;
		
			// counting tops
			if (wave[(i-1+n)%n] < wave[i] 
			and wave[(i+1)%n] < wave[i]) peak++;		
		}

		cout << peak << '\n';
	}
	return 0;
}