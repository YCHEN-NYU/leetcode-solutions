#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 255; ++i) {
        cout << char(i) << ' ';
        if ((i + 1) %10 == 0)
            cout << endl;
    }
    cout << endl;
    return 0;
}
