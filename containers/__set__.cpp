// set 
#include <iostream>
#include <set>
using namespace std;
template <typename Set>
void print_set(Set & InSet){
	auto SetIter = InSet.begin();
	while(SetIter != InSet.end()){
		cout << *SetIter << " ";
		++SetIter;
	} cout << endl;
}

int main() {
	set<string> animals = {"dog", "cat", "tiger", "fish", "elephant"};
	set<string>::iterator iter = animals.begin();
	while(iter != animals.end()){
		cout << *iter << " ";
		++iter;
	} cout << endl;
	animals.insert("snake");
	animals.insert("snake");

	string target = "snake";
	if(animals.find(target) != animals.end()){
		cout << target << " is found!" << endl;
	}
	else {
		cout << target << " doesn't not exist in the set!" << endl;
	}

	print_set(animals);
}