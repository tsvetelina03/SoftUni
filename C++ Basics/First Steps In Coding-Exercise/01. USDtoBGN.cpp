#include <iostream>
#include <math.h>
using namespace std;

int main()
{
cout.setf(ios::fixed);
	cout.precision(2);

	double dollars;
	cin >> dollars;

	double leva = dollars * 1.79549;
	cout << leva << endl;
  
	return 0;
}
