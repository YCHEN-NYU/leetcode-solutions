// unordered_map simple example 
#include <iostream>
//#include <unordered_map>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

template <typename Map>
void print_map(Map & m) {
	cout << '{';
	for (auto & p: m) {
		cout << p.first << ':' << p.second << ' ';
	}
	cout << "}\n";
}


int main () {
	/*unordered_map<string, string> nameMap = {
		{"firstname", "Y"}, 
		{"lastname", "Chen"},
	};

	cout << "First Name: " << nameMap["firstname"] << endl;
	cout << "Last Name: " << nameMap["lastame"] << endl;
	*/

	map<string, string> stockMap = {
		{"Nvidia", "NVDA"}, 
		{"Apple", "APPL"},
		{"Alibaba", "BABA"},
		{"Caterpillar", "CAT"},
	};

	cout << "Nvidia: " << stockMap["Nvidia"] << endl;
	cout << "Apple: " << stockMap["Apple"] << endl;
	// find and iterator
	map<string, string> iter(stockMap.find("Nvidia"), stockMap.end());
	cout << "\niter = ";
	print_map(iter);
	print_map(stockMap);

	// print out the whole map by iterator
	map<string, string>::iterator stockMapIterator;
	for (stockMapIterator = stockMap.begin(); stockMapIterator != stockMap.end(); ++stockMapIterator){
		cout << stockMapIterator -> first << ':';
		cout << stockMapIterator -> second << endl;
	}


	map<string, int> fruitMap; 
	fruitMap["apple"] = 4;
	fruitMap["banana"] = 12;
	fruitMap["orange"] = 3;

	cout << "# of apples: " << fruitMap["apple"] << endl;

	cout << '='*40 << endl;
	print_map(fruitMap);



}