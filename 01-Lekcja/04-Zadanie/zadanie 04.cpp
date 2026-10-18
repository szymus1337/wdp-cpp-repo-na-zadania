zadanie 04

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int pierwszaliczba = 7;
    int drugaliczba = 42;
    int trzecialiczba = 1250;

    cout<<"Wyrownane liczby (szerokość 4 znaków):"<<endl;
    cout<<setw(4)<<pierwszaliczba<<endl;
    cout<<setw(4)<<drugaliczba<<endl;
    cout<<setw(4)<<trzecialiczba<<endl;

    return 0;
    
}