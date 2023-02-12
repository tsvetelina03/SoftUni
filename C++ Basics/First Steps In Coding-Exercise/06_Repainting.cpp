#include <iostream>

using namespace std;

int main()
{
    int nailon;
    cin>>nailon;
    int kolBoq;
    cin>>kolBoq;
    int kolRazreditel;
    cin>>kolRazreditel;
    int hours;
    cin>>hours;

    
   double priceNailon = (nailon + 2) * 1.5;
   double priceBoq = (kolBoq+(kolBoq*0.1)) * 14.5;
   double priceRazreditel = kolRazreditel * 5;
  
   double oshte3 = 0.4;
   
   double vsichko = priceRazreditel + priceBoq + priceNailon  + oshte3;
   double priceMaistori = ( vsichko * 0.3)*hours;
   double total = vsichko + priceMaistori;
   cout<<total;

    return 0;
}
