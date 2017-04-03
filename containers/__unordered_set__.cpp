// unordered_set
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	unordered_set<int> someNum {1, 3, -1, 8, 0, 5};
	// print out the unordered set
	auto iter = someNum.begin();
	while(iter != someNum.end()){
		cout << *iter << " ";
		++iter;
	} cout << endl;

	return 0;
}