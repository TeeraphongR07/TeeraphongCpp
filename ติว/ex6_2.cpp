#include<iostream>
using namespace std;
int main(){
	int scoremax;
	cout << "Enter Score : ";
	cin >> score;
	max=score;
		
	while(score!=-1){
		cout << "Enter Score : ";
		cin >> score;
		if(max>score){
			max=max;
		}
		if(score>max){
			max=score;
		}
	}
	cout << "Max score is " << max << "\n";
return(0);
}
