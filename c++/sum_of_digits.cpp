#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
	ifstream reader; 
	int sum, num;

	reader.open(argv[1]);

	while (reader >> num) {
		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}

		cout << sum << endl;
		sum = 0;

	}
}