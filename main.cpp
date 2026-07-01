#include <iostream>
using namespace std;

int suma(int a, int b) {
    int resultado;  //  variable no inicializada (cppcheck lo detecta)
    return resultado;
}

int main() {
    cout << suma(2, 3) << endl;
    return 0;
}
