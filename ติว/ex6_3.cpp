#include<iostream>
using namespace std;
int main(){
	float num;
	int p=0,n=0;
	
	cout << "Enter number : ";
	cin >> num;
		if(num>=1){
			p++;
			}
		if(num<=-1){
			n++;
		}
		
	while(num!=0){
		cout << "Enter number : ";
		cin >> num;
		
		if(num>=1){
			p++;
		}
		
		if(num<=-1){
			n++;
		}
	}
	cout << "Negative number = " << p<<endl;
	cout << "Positive number = " << n;
return(0);
}
