// std::hash
#include <iostream>
#include <functional>
using namespace std;

int main() {
	string s = "Stand back! I've got Jimmies";
	int quantity = 1000;
	double x_pos = 2.5;
	hash<string> hash_str;
	hash<int> hash_int;
	hash<double> hash_dbl;
	cout << hash_str(s) << endl;
	cout << hash_int(quantity) << endl;
	cout << hash_dbl(x_pos) << endl;

}