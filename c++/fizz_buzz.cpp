// Complete and working solution
// 10/26/16

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream reader;
	int x, y, n;
	reader.open(argv[1]);
	// reader >> x >> y >> n;
	// reader.close();
	//cout << "the first divisor is: " << x << "\nthe second divisor is: " << y << "\nthe number you must count up to: " << n << endl;
	while (reader >> x >> y >> n) {
		for (int i = 1; i <= n; i++) {
			if (i % x == 0 && i % y == 0) {
				cout << "FB ";
			}
			else if (i % x == 0) {
				cout << "F ";
			}
			else if (i % y == 0) {
				cout << "B ";
			}
			else {
				cout << i << " ";
			}
		}
			cout << endl;
	}

}
