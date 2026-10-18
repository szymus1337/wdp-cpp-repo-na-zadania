zadanie 02

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double podanaliczba = 0.0;

    cout<<"Podaj liczbe rzeczywista:";
    cin>>podanaliczba;

    cout<<fixed;
    
    cout<<"Z dokładnoscia do 1 miejsca: "<<setprecision(1)<<podanaliczba<<endl;
    cout<<"Z dokładnoscia do 3 miejsca: "<<setprecision(3)<<podanaliczba<<endl;
    cout<<"Z dokładnoscia do 5 miejsca: "<<setprecision(5)<<podanaliczba<<endl;
    return 0;
}