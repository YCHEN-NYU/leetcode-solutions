// multi_set
#include <iostream>
#include <set>
using namespace std;

template <typename MSet>
void print_multiset(MSet & m){
	auto iter = m.begin();
	while(iter != m.end()) {
		cout << * iter << " ";
		++iter;
	} cout << endl;
}

int main() {
	multiset<string> drinks = {"water", "tea", "coffee", \
	"coke", "espresso", "soda", "redbull"};
	print_multiset(drinks);
	drinks.insert("redbull");
	print_multiset(drinks);

	return 0;
}