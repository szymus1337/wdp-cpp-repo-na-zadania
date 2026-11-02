zadanie 1

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Wieksza liczba: " << a << endl;
        cout << "Mniejsza liczba: " << b << endl;
        cout << a << " > " << b << endl;
    }
    else if (a < b) {
        cout << "Wieksza liczba: " << b << endl;
        cout << "Mniejsza liczba: " << a << endl;
        cout << a << " < " << b << endl;
    }
    else {
        cout << "Liczby sa rowne: " << a << endl;
        cout << a << " == " << b << endl;
    }

    return 0;
}