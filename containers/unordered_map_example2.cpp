#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> RGB = {
		{"RED", "#FF0000"},
		{"GREEN", "#00FF00"},
		{"BLUE", "#0000FF"}
	};
	// map iterator
	map<string, string>::iterator RGBIterator = RGB.begin();
	while (RGBIterator != RGB.end()){
		cout << RGBIterator->first << ": " << RGBIterator->second << endl;
		++RGBIterator;
	}

	return 0;
}