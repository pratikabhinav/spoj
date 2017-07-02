#include<iostream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{	
	int n;
	while (1) {
		cin >> n;
		if (n == 42)
			return 0;
		else cout << n << endl;
	}
	return 0;
}