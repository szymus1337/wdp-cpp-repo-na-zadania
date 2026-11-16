#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    long long suma = 0;
    
    for (int i = 0; i < n; ++i) {
        suma += i;
    }

    cout << "Suma liczb naturalnych mniejszych od " << n << " wynosi: " << suma << endl;

    return 0;
}