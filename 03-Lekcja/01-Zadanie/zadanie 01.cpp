zadanie 01

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Podaj liczby: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << endl;
        cout << b << endl;
        cout << a << " > " << b << endl;
    } else if (a < b) {
        cout << b << endl;
        cout << a << endl;
        cout << a << " < " << b << endl;
    } else {
        cout << a << endl;
        cout << a << endl;
        cout << a << " == " << b << endl;
    }

    return 0;
}