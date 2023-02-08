#include <iostream>
using namespace std;

int main()
{
    string name;
    cin>>name;
   
     int br;
    cin>>br;
    
    int hours;
    hours = br * 3;
    
    cout<<"The architect "<<name<< " will need "<<hours<<" hours to complete "<<br<<" project/s."<<endl;
    

    return 0;
}
