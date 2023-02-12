#include <iostream>

using namespace std;

int main()
{
    double suma ;
    cin>>suma;
    double srok ;
    cin>>srok;
    double procent ;
    cin>>procent;
    procent = procent/100;
    
    double total = suma + srok * ((suma * procent)/12);
    
    cout<<total<<endl;

    return 0;
}
