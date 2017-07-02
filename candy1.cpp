#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n != -1) {
		int *foo = new int[n];
		int sum = 0, mean = 0, count = 0;
		for (int i = 0; i < n; i++) {
			cin >> foo[i];
			sum += foo[i];
		}
		mean = sum / n;
		if (mean * n != sum){
			count = -1;
		}
		else {
			for (int i = 0; i < n; i++) {
				if (foo[i] < mean) {
					count += mean - foo[i];
				}
			}
		}
		cout << count << endl;
		cin >> n;
	}
	return 0;
 }