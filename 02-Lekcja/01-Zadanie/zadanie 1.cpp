zadanie 1

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Podaj trzy liczby calkowite: ";
    cin >> a >> b >> c;

    cout << "Suma: " << a + b + c << endl;
    cout << "Roznica: " << a - b << endl;
    cout << "Iloczyn: " << a * c << endl;
    cout << "Iloraz: " << (double)c / b << endl;

    return 0;
}