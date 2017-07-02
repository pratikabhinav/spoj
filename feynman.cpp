#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main() {
	int n;
	do {
		cin >> n;
		if (n == 0)
			return 0;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int sq = (n - i)*(n - i);
			cnt+= sq;
		}
		cout << cnt << endl;
	} while (n);
	return 0;
}

