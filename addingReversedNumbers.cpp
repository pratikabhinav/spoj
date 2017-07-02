#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;

void swapString(string &A, int len) {
	int j = len - 1;
	for (int i = 0; i < len / 2; i++) {
		swap(A[i], A[j]);
		j--;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, la, lb;
		cin >> a >> b;
		string A, B, C;
		ostringstream convert;
		convert << a;
		A = convert.str();
		convert.str("");
		convert.clear();
		convert << b;
		B = convert.str();
		la = (int)A.size();
		lb = (int)B.size();
		swapString(A, la);
		swapString(B, lb);
		int c, d, e, f;
		if (!(istringstream(A) >> c)) c = 0;
		if (!(istringstream(B) >> d)) d = 0;
		e = c + d;
		convert.str("");
		convert.clear();
		convert << e;
		C = convert.str();
		int lc = (int)C.size();
		swapString(C, lc);
		if (!(istringstream(C) >> f)) f = 0;
		cout << f <<endl;

	}
	return 0;
}