zadanie 2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double ocena1, ocena2, ocena3, ocena4, ocena5;

    cout << "Podaj piec ocen: ";
    cin >> ocena1 >> ocena2 >> ocena3 >> ocena4 >> ocena5;

    double srednia = (ocena1 + ocena2 + ocena3 + ocena4 + ocena5) / 5;

    cout << fixed << setprecision(2);
    cout << "Srednia ocen: " << srednia << endl;

    return 0;
}