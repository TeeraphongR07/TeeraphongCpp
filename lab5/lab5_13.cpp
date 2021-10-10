#include <iostream>
#include <string>
using namespace std;
void ParseName(string &FirstName,string &LastName, const string FullName); //const before variable is karkongtee

int main()
{
	string Name = "Stroustrup, Bjarne";
	string LastName, FirstName;
	
	ParseName(FirstName,LastName,Name);//cal function
	
	Name = FirstName + " " + LastName;
	cout << "Name : " << Name << endl;
	return(0);
}
void ParseName(string &FirstName,string &LastName, const string FullName)
{
	int I = FullName.find(","); //save address string find, assign I
	LastName = FullName.substr(0,I); //substr cut text andress index0 to andress I
	FirstName = FullName.substr(I+2,FullName.size());
}
