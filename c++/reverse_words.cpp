// finally completed
// 11/5/2016

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(const string &s, char delim) {
	stringstream ss(s);
	string item; 
	vector<string> tokens;

	while (getline(ss, item, delim)){
		tokens.push_back(item);
	}

	return tokens;
}

int main(int argc, char *argv[]) {
	vector<string> v;
	ifstream reader;
	string str;
	
	reader.open(argv[1]);

	while (getline(reader, str)){
		v = split(str, ' ');
		
		for (int i = v.size() -1; i >= 0; i--) {
			cout << v[i] << " ";
		}
		cout << endl;
		v.clear();
	}	
}