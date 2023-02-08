#include <iostream>
using namespace std;

int main()
{
    int foodDog;
    cin>>foodDog;
    double priceDog = foodDog * 2.5;
   
    int foodCat;
    cin>>foodCat;
    double priceCat = foodCat* 4;
    
    double total = priceCat + priceDog;
    
    cout<<total<<" lv"<<endl;
    

    return 0;
}
