#include <iostream>
using namespace std;

int main()
{
    double metri;
    cin>>metri;
    
    double price = metri * 7.61;
    double discount = price * 0.18;
     double total = price - discount;
    
    cout<<"The final price is: "<<total<<" lv."<<endl; 
     cout<<"The discount price is: "<<discount<<" lv."<<endl;
    return 0;
}
