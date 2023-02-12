#include <iostream>

using namespace std;

int main()
{
    int brStr ;
    cin>>brStr;
    int strPerH ;
    cin>>strPerH;
    int brDni ;
    cin>>brDni;
    int hours = brStr/strPerH;
    int total = hours / brDni;
    
   
    cout<<total<<endl;

    return 0;
}
