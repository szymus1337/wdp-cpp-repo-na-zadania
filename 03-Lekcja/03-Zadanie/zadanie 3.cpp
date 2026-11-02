

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Nie mozna dzielic przez zero!";
    }
    else if (a % b == 0) {
        cout << a << " jest podzielne przez " << b;
    }
    else {
        cout << a << " nie jest podzielne przez " << b;
    }

    return 0;
}