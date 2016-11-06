// Complete and working solution 
// 10/26/16

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int value) {
	for (int i = 2; i <= value/2; i++) {
		if (value % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int sum = 0;

	for (int i = 2, j = 0; j < 1000; i++) {
		if (isPrime(i)) {
			sum += i;
			j++;
		}
	}

	cout << sum << endl;
}
