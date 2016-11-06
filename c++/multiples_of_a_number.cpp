// Complete, not tested solution
// 10/28/16

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream reader;
	reader.open(argv[1]);
	int x, n;
	char comma;

	while (reader >> x >> comma >> n) {
		do {
			n *= 2;

		} while (n < x);

		cout << n << endl;
	}
	reader.close();
}

