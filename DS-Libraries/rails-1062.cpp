#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	int x = 1;
	while(cin >> n and n){
		int order[n];
		while(cin >> order[0]){

			if(order[0] == 0){
				cout << '\n';
				break;
			}

			for (int i=1; i<n; i++)
				cin >> order[i];

			stack<int> station;
			list<int> train(n);
			iota(train.begin(), train.end(), 1);

			bool correct = true;
			for (int i=0; i<n; i++){
				while (!train.empty() and train.front() < order[i]){
					station.push(train.front());
					train.pop_front();
				}

				if (!train.empty() and train.front() == order[i])
					train.pop_front();
				else if (!station.empty() and station.top() == order[i])
					station.pop();
				else{
					correct = false;
					break;
				}
			}

			cout  << ((correct)? "Yes\n": "No\n");


		}
	}

	return 0;
}