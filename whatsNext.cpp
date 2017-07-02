#include <iostream>
 
using namespace std;
 
int main()
{	
	int a, b, c;
	float d, e, f, g;
	cin >> a >> b >> c;
	while (a || b || c){
		d = (float)c / b;
		e = (float)b / a;
		f = (float)c - b;
		g = (float)b - a;
		if (d == e){
			cout << "GP" << ' ' << c*e << endl;
		}
		if (f == g) {
			cout << "AP" << ' ' << c + g << endl;
		}
		cin >> a >> b >> c;
	}
	return 0;
}
 