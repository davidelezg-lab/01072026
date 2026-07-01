#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main() {
    if (suma(2, 3) != 5) {
        cout << "TEST FAILED" << endl;
        return 1;
    }

    cout << "TEST OK" << endl;
    return 0;
}