#include <iostream>
#include <math.h>
using namespace std;

int checkPrime(int a) {
	int sq = sqrt(a);
	int flag = 0;
	if (a == 1) {
		flag = 1;
		goto ret;
	}
	for (int i = 2; i <= sq; i++) {
		if (a%i == 0) {
			flag = 1;
			break;
		}
	}
ret:
	return flag;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int a, b, i, p = 0;
		cin >> a >> b;
		for (i = a; i <= b; i++) {
			p = checkPrime(i);
			if (!p)
				cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}