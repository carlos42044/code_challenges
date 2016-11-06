#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
// #include <cstdlib>

using namespace std;

vector<int> extract_numbers(const string &s, char delim) {
	stringstream ss(s);
	string item;
	int x;
	vector<int> v;

	while (getline(ss, item, delim)) {
		x = stoi(item);
		v.push_back(x);
	}
	return v;
}

vector<int> to_binary(int x) {
	vector<int> v;

	do {
		v.push_back(x & 1);
	} while(x >>= 1);

	return v;
}

int main(int argc, char *argv[]) {
	ifstream reader;
	reader.open(argv[1]);
	vector<int> v;
	vector<int> binary_num;
	string str;
	int x, y;

	while (getline(reader, str)) {
		v = extract_numbers(str, ',');
		binary_num = to_binary(v[0]);
		x = binary_num[(v[1] - 1)];
		y = binary_num[(v[2] - 1)];

		if (x == y) {
			cout << "true" << endl;
		}	else {
			cout << "false" << endl;
		}
		v.clear();
		binary_num.clear();
	}
}