#include <bits/stdc++.h>

using namespace std;

int main(){
	int laps, racers;
	while (cin >> laps >> racers and (laps or racers)){

		vector< vector<int> > arrivals(laps, vector<int>(racers));
		vector <int> scores(racers, 0);

		for (int i=0; i<laps; i++)
			for (int j=0; j<racers; j++){
				int temp; cin >> temp;
				arrivals[i][temp - 1] = j+1;
			}


		int s; cin >> s; cin.ignore();

		vector< vector<int> > scoringSystems(s, vector<int>());

		string line;
		int score, last;
		for (int i=0; i<s; i++){
			getline(cin, line);
			istringstream in (line);

			in >> last;
			while(in >> score)
				scoringSystems[i].push_back(score);
		} 

		for (int i=0; i<s; i++){

			for (int j=0; j<laps; j++)
				for (int k=0; k<scoringSystems[i].size(); k++)
					scores[arrivals[j][k] - 1] += scoringSystems[i][k];
				

			int maxScore = *max_element(scores.begin(), scores.end());
			bool first = true;
			for (int i=0; i<racers; i++)
				if (scores[i] == maxScore){
					if (!first) cout << ' ';
					first = false;
					cout << i + 1;
				}
			cout << '\n';

			scores = vector<int>(racers, 0);
		}
	}


	return 0;
}