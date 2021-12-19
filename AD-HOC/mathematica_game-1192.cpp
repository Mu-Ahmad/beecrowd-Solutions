#include <iostream>

using namespace std;

int main(){
	int t; cin >> t;

	string line;
	char ch;
	int n1, n2;
	while(t--){
		cin >> line;
		
		n1 = line[0] - '0';
		ch = line[1];
		n2 = line[2] - '0';

		if (n1 == n2)
			cout << n1 * n2 << '\n';
		else if (ch >= 'A' and ch <= 'Z')
			cout << n2 - n1 << '\n';
		else
			cout << n2 + n1 << '\n';

	} 
}