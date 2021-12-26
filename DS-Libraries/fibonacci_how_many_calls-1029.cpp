#include <bits/stdc++.h>

using namespace std;

int calls = 0;

int fib(int n){
	calls++;
	if (n<2) return n;

	return fib(n-1) + fib(n-2);
}

int main(){
	int t, n, ans; cin >> t;

	while(t--){
		cin >> n;
		calls = 0;
		ans = fib(n);

		printf("fib(%d) = %d calls = %d\n", n, calls-1, ans);
	}

	return 0;
}