#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		/*
			there will be three (3) cases:
			
			case 1: n == 1 and m == 1
			there's only one cell so we don't need any more information
			
			case 2: n or m equals 1
			it's either 1 row or 1 column so we can find the hidden cell easily
			
			case 3: n >= 2 and m >= 2
			assume someone chose a cell (i, j), it's easy to see that at least 3
			of the 4 cells (i, j - 1), (i + 1, j), (i - 1, j), (i, j + 1) exist
			in the table, but their distance from (i, j) is 1 for all 4 of them,
			so we need another cell to determine the hidden cell if the first chosen
			cell fails to determine it
		*/
		if (n == 1 && m == 1) {
			cout << 0;
		} else if (min(n, m) == 1) {
			cout << 1;
		} else {
			cout << 2;
		}
		cout << '\n';
	}
	return 0;
}
