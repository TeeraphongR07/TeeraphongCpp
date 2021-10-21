#include<iostream>
using namespace std;
int main(){
	float sum,tem,avr;
	int i;
	
	cout << "Enter temperature : ";
	cin >> tem;
	sum=sum+tem;
	
	while(tem!=0){
		cout << "Enter temperature : ";
		cin >> tem;
		i++;
		sum=sum+tem;
		avr=sum/(i);
	}
	cout << "temperature is " << avr;
return(0);
}
