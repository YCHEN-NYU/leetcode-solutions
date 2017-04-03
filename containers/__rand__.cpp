//__rand__
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int iSeed, iGuess;
	srand(time(NULL));
	iSeed = rand() % 100 + 1;

	for(int i = 0; i < 100; ++i){
		if((i + 1)%10 == 0)
			cout << iSeed << endl;
		else 
			cout << iSeed << " ";
		srand(iSeed);
		iSeed = rand() % 100 + 1;
	}

	cout << "RAND_MAX = " << RAND_MAX << endl;
}
