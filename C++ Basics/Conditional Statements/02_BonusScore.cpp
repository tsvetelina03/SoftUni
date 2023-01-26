#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    double bonus;
    
    if(num<=100)
    {
        bonus = 5;
    }
    else if (num>100 && num<1000)
    {
        bonus = num * 0.2;
    }
    else
    {
        bonus = num * 0.1;
    }
    if(num%2==0)
    {
        bonus = bonus + 1;
    }
    else if(num%10==5)
    {
        bonus = bonus + 2 ; 
    }
    double bonus2 = num + bonus;
    cout<<bonus<<endl<<bonus2;
    return 0;
}
