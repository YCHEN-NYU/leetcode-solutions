// unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;


template <typename Map> 
void print_map(Map & m){
	auto iter = m.begin();
	while(iter != m.end()){
		cout << iter->first << ": " << iter->second << endl;
	}
}
int main() {
	unordered_map<int, string> numberMap {
		{1, "one"},
		{2, "two"},
		{3, "three"},
		{4, "four"},
		{5, "five"},
		{6, "six"}
	};
	print_map(numberMap);

}