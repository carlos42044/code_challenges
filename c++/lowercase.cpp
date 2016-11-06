#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {
	ifstream reader;

	reader.open(argv[1]);
	string str;

	while (getline(reader, str)) {
		for (int i = 0; i < str.size(); i++) {
			cout << tolower(str.at(i));
		}

		cout << endl;
	}
}