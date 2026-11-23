zad 3
#include <iostream>
using namespace std;

int main() {
    int ranga;
    cin >> ranga;

    switch (ranga) {
        case 5: cout << "wydawac rozkazy\n"; [[fallthrough]];
        case 4: cout << "rozmawiac z wladca\n"; [[fallthrough]];
        case 3: cout << "wejsc do zamku i przyjac giermka\n"; [[fallthrough]];
        case 2: cout << "wejsc na dziedziniec\n"; [[fallthrough]];
        case 1: cout << "oddac hold wladcy\n"; break;
        default: cout << "Niepoprawna ranga\n";
    }
    return 0;
}