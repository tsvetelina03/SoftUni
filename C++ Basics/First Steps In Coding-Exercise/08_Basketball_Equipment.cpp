#include <iostream>

using namespace std;

int main()
{
    int taksa;
    cin>>taksa;
    
    double kecove =  taksa - taksa * 0.4;
    double ekip =  kecove - kecove * 0.2;
    double topka =  ekip * 0.25;
    double aksesoar =  topka * 0.2;
    
    double total = taksa + kecove + ekip + topka + aksesoar;
    cout<<total;

    return 0;
}
