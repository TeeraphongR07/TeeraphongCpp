#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter Score : ";
	cin >> score;
	if(score>=50){
		cout << "You Pass";
	}
	else{
		cout << "You Failed !!!";
	}
	return(0);
}
