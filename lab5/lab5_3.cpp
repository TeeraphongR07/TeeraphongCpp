#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double Value;
	cout << "Enter floating number : ";
	cin >> Value;
	cout << endl;
	cout << "\n Ceiling of " << Value << " is " << ceil(Value);
	cout << "\n Floor of " << Value << " is " << floor(Value);
	cout << "\n Square root of " << Value << " is " <<sqrt(Value);
	cout << "\n Exponential of " << Value << " is " << exp(Value);
	cout << "\n Floating absolute of " << Value << " is ";
	cout << fabs(Value);
	cout << "\n Natural logarithm of " << Value << " is ";
	cout << log(Value);
	cout << "\n Logarithm(10 base) of " << Value << " is ";
	cout << log10(Value);
	cout << "\n Power three of " << Value << " is ";
	cout << pow(Value,3);
	cout << "\n Sin of " << Value << " is " << sin(Value);
	cout << "\n Cosine of " << Value << " is " << cos(Value);
	cout << "\n Tangent of " << Value << " is " << tan(Value);
	cout << endl;
	return(0);
}
