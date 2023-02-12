#include <iostream>

using namespace std;

int main()
{
    int duljina;
    cin>>duljina;
    int shirochina;
    cin>>shirochina;
    int visochina;
    cin>>visochina;
    double procent;
    cin>>procent;
    procent = procent/100;
    
    double obem = duljina * shirochina * visochina;
    double litri = obem * 0.001;
    double zaeto = litri*(1-procent);
    cout<<zaeto;
    

    return 0;
}
