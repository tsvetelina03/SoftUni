#include <iostream>

using namespace std;

int main()
{
    int firstTime,secondTime,thirdTime;
    cin>>firstTime>>secondTime>>thirdTime;
    
    int total = firstTime + secondTime + thirdTime;
    int min = total / 60;
    int sec = total % 60;
    
    if(sec < 10)
    {
        cout<<min<<":0"<<sec<<endl;
    }
    else
    {
        cout<<min<<":"<<sec<<endl;
    }

    return 0;
}
