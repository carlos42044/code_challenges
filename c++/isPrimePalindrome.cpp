// Complete and working solution
// 10/26/16

#include <iostream>
#include <string>

using namespace std;

bool is_prime(int value);
bool is_palindrome(int value);	

int main () {
	// int largest_palindrome_prime;
	// for (int i = 999; i > 2; i--) {
	// 	if (is_prime(i) && is_palindrome(i)) {
	// 		largest_palindrome_prime = i;
	// 		break;
	// 	}
	// }

	// cout << largest_palindrome_prime << endl;

	cout << "prime numbers up to 3960" << endl;
	for (int i = 0; i <= 3960; i++) {
		if (is_prime(i)) {
			cout << i << endl;
		}
	}
}

bool is_prime(int value) {
	for (int i = 2; i <= value/2; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	
	return true;
}

bool is_palindrome (int value) {
	string str = to_string(value);
	for (int i = 
		0, j = str.size() -1; i < str.size()/2; i++, j--) {
		if (!(str.at(i) == str.at(j))) {
			return false;
		}
	}

	return true;
}
