#include <iostream>

using namespace std;

int main()
{
    int brHimikali;
    cin>>brHimikali;
    int brMarkeri;
    cin>>brMarkeri;
    int brPreparat;
    cin>>brPreparat;
    double discount;
    cin>>discount;

    
   double priceHimikali = brHimikali * 5.8;
   double priceMarkeri = brMarkeri * 7.2;
   double pricePreparat = brPreparat * 1.2;
   
   double vsichko = pricePreparat + priceMarkeri + priceHimikali;
   double total = vsichko - (vsichko *(discount/100));
   cout<<total;

    return 0;
}
