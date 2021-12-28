#include <bits/stdc++.h>

using namespace std;

int main(){
	int r, c, x, q, a, b;

	while(cin >> r >> c and (r or c)){
		vector<vector<int>> grid(r, vector<int>(c));

		for (int i=0; i<r; i++)
			for (int j=0; j<c; j++)
				cin >> grid[i][j];

		cin >> q;

		while(q--){
			cin >> a >> b;

			int squareSize = 0;
			for (int i=0; i<r; i++){
				auto it = lower_bound(grid[i].begin(), grid[i].end(), a);
				if (it != grid[i].end()){
				
					int startCol = it - grid[i].begin();
					for (int j = squareSize; j<r; j++){
						int endR = i + j;
						int endC = startCol + j;
						if (endR >= r or endC >= c or grid[endR][endC] > b) break;

						squareSize++;
					}
				}
			}

			printf("%d\n", squareSize);
		}
		printf("-\n");
	}
	return 0;
}