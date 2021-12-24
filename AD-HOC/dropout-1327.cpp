#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n and n){
		vector <string> players(n);
		vector <int> score(n, 0);

		for (int i=0; i<n; i++)
			cin >> players[i];

		vector <int> deck(52);
		for (int i=0; i<52; i++)
			cin >> deck[i];

		int k=0;
		while (k<52 and players.size() > 1 and 52 - k >= players.size()){

			for (int i=0; i<players.size(); i++, k++)
				score[i] = deck[k];

			int smallest = *min_element(score.begin(), score.begin()+players.size());
			int largest  = *max_element(score.begin(), score.begin()+players.size());
			
			if (smallest == largest) break;

			for (int j=players.size() - 1; j>=0; j--)
				if (score[j] == smallest)
					players.erase(players.begin() + j);
		} 

		for (const auto& player: players)
			cout << player << ' ';
		cout << endl;

	}

	return 0;
}