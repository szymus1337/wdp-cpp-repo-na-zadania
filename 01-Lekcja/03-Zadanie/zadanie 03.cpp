zadanie 03

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string imie = " ";
    int wiek = 0;
    double wzrost = 0.0;

    cout<<"Podaj swoje imię: ";
    cin>>imie;
    cout<<"Podaj swój wiek: ";
    cin>>wiek;
    cout<<"Podaj swoj wzrost: ";
    cin>>wzrost;

    cout<<"\n--- Wprowadzone dane ---"<<endl;
    cout<<"Imię: "<<imie<<endl;
    cout<<"Wiek: "<<wiek<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Wzrost: "<<wzrost<<"cm"<<endl;

    return 0;
}