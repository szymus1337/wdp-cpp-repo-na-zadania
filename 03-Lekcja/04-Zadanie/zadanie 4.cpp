
#include <iostream>
using namespace std;

int main() {
    int ocena1, ocena2, ocena3, ocena4, ocena5;
    int niedostateczne = 0;
    double srednia;

    cout << "Podaj 5 ocen: ";
    cin >> ocena1 >> ocena2 >> ocena3 >> ocena4 >> ocena5;

    srednia = (ocena1 + ocena2 + ocena3 + ocena4 + ocena5) / 5.0;

    if (ocena1 == 1) niedostateczne++;
    if (ocena2 == 1) niedostateczne++;
    if (ocena3 == 1) niedostateczne++;
    if (ocena4 == 1) niedostateczne++;
    if (ocena5 == 1) niedostateczne++;

    cout << "Srednia ocen: " << srednia << endl;
    cout << "Liczba ocen niedostatecznych: " << niedostateczne << endl;

    return 0;
}