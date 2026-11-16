#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj dodatnia liczbe n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Liczba n musi byc wieksza od zera!" << endl;
        return 1;
    }

    double suma = 0;
    
    for (int i = 0; i < n; ++i) {
        double liczba;
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczba;
        suma += liczba;
    }

    double srednia = suma / n;

    cout << "Suma podanych liczb wynosi: " << suma << endl;
    cout << "Srednia podanych liczb wynosi: " << srednia << endl;

    return 0;
}