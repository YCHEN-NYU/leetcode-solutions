#include <iostream>
#include <map>
#include <utility>
#include <unordered_map>
#include <string>

using namespace std;

// print out the full map
template <typename Map>
void print_map(Map & m){
	auto map_iterator = m.begin();
	while(map_iterator != m.end()){
		cout << map_iterator->first << " " << map_iterator->second << endl;
		++map_iterator;
	}
}

int main() {
	// map 
	// (1) default constructor
	std::map<string, string> RGB = {
		{"RED", "#FF0000"},
		{"GREEN", "#00FF00"},
		{"BLUE", "#0000FF"}
	};

	// (2) map iterator
	map<string, string>::iterator RGBIterator = RGB.begin();
	while (RGBIterator != RGB.end()){
		cout << RGBIterator->first << ": " << RGBIterator->second << endl;
		++RGBIterator;
	}

	// (3) find
	std::map<int, int> squareMap = {
		{1, 1}, 
		{2, 4}, 
		{3, 9}, 
		{4, 16},
		{5, 25}
	};
	print_map(squareMap);

	int target = 3;
	map<int, int>::iterator target_iterator = squareMap.find(target);
	if(target_iterator != squareMap.end()){
		cout << "Target found:" << endl;
		cout << target_iterator->first << ": " << target_iterator->second << endl;
	}
	else
		cout << "No target found!" << endl;

	// clear the contents in the map
	squareMap.clear();
	if(squareMap.empty())
		cout << "Empty map" << endl;
	else
		cout << "non-empty map" << endl;
	
	// erase
	map<int, string> charMap = {
		{1, "one"},
		{2, "two"},
		{3, "three"},
		{4, "four"},
		{5, "five"},
		{6, "six"}
	};
	// remove pairs with odd keys
	for (auto it = charMap.begin(); it != charMap.end();){
		if(it->first %2 == 1)
			it = charMap.erase(it);
		else
			++it;
	}
	print_map(charMap);
	cout << charMap.count(2) << endl;
	cout << charMap.value_comp() << endl;
	return 0;
}