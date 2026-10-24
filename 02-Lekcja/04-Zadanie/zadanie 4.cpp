zadanie 4

#include <iostream>
using namespace std;

int main() {
    int sekundy;

    cout << "Podaj liczbe sekund: ";
    cin >> sekundy;

    int minuty = sekundy / 60;
    int reszta = sekundy % 60;

    cout << "Pelne minuty: " << minuty << endl;
    cout << "Pozostale sekundy: " << reszta << endl;

    return 0;
}