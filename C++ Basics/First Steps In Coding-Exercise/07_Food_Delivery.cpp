#include <iostream>

using namespace std;

int main()
{
    int brPile;
    cin>>brPile;
    int brRibe;
    cin>>brRibe;
    int brVegan;
    cin>>brVegan;
    
    double pricePile = brPile * 10.35;
    double priceRiba = brRibe * 12.4;
    double priceVegan = brVegan * 8.15;
    
    double vsichko = priceVegan + priceRiba + pricePile;
    double desert = vsichko * 0.2;
    double deliver = 2.5;
    double total = vsichko + deliver + desert;
    cout<<total;

    return 0;
}
