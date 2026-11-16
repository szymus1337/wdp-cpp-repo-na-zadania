#include <iostream>
#include <climits>

using namespace std;

int main() {
    int liczba;
    long long suma = 0;
    int licznik = 0;
    int maks = INT_MIN;
    int minimum = INT_MAX;

    cout << "Podaj liczby calkowite (0 konczy wczytywanie):\n";

    while (true) {
        cin >> liczba;
        
        if (liczba == 0) {
            break;
        }

        suma += liczba;
        licznik++;

        if (liczba > maks) {
            maks = liczba;
        }
        if (liczba < minimum) {
            minimum = liczba;
        }
    }

    if (licznik == 0) {
        cout << "Nie podano zadnych liczb przed zerem." << endl;
    } else {
        double srednia = static_cast<double>(suma) / licznik;
        
        cout << "\n--- WYNIKI ---" << endl;
        cout << "Najwieksza podana liczba: " << maks << endl;
        cout << "Najmniejsza podana liczba: " << minimum << endl;
        cout << "Suma: " << suma << endl;
        cout << "Srednia: " << srednia << endl;
    }

    return 0;
}