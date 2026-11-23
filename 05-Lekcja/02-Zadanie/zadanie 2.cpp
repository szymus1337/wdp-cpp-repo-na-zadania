zad 2
#include <iostream>
using namespace std;

int main() {
    double a = 0, b = 0, wynik = 0;
    int wybor;
    char op;

    do {
        cout << "1-zmiana a, 2-zmiana b, 3-dzialanie, 4-wynik, 5-koniec: ";
        cin >> wybor;

        switch (wybor) {
            case 1: cin >> a; break;
            case 2: cin >> b; break;
            case 3:
                cin >> op;
                if (op == '+') wynik = a + b;
                else if (op == '-') wynik = a - b;
                else if (op == '*') wynik = a * b;
                else if (op == '/' && b != 0) wynik = a / b;
                break;
            case 4: cout << wynik << endl; break;
        }
    } while (wybor != 5);

    return 0;
}