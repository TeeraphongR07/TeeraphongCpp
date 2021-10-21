#include<iostream>
#include<iomanip>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int getdata(int stdid, string stdname, float test1, float test2, float test3, float total, float avr);
int average(int &stdid, int &r, int &n, int &search, float &test1, float &test2, float &test3, float&total);


int main(){
	int search, r=0, j, i, s=20, std[20], stdid[20];
	
	string stdname[20];
	
	float test1[20], test2[20], test3[20], total[20], avr[20];
	
	for(i=0; i<3; i++){
		getdata(stdid[i], stdname[i], test1[i], test2[i], test3[i], total[i], avr[i]);
	}
	
	for(i=0; i<3; i++){
		cout << stdid[i] <<"\t"<< stdname[i] <<"\t"<< test1[i] <<"\t"<< test2[i] <<"\t"<< test3[i] <<"\t"<< total[i] <<endl;
	}
	int n = sizeof(total) / sizeof(total[0]);
	
//		average(stdid[r], r, n, search, test1[i], test2[i], test3[i], total[i]);
		average(search);
		
		
	for(r=0; r<n; r++){
		if(stdid[r] == search){
			break;
		}
	}
	
	if(r == n){
		cout << "Not found ";
	}
	
	cout << "Search ID == " <<stdid[r] << "Average score = " << avr[r];
		

	
	
	cout << "\nMax Element = "
         << *max_element(total, total + n);
	
return(0);
}

int getdata(int &stdid, string &stdname, float &test1, float &test2, float &test3 ,float &total, float &avr){
	cout <<endl<< "Enter ID : ";
	cin >> stdid;
	
	cout << "Enter Name : ";
	cin >> stdname;
	
	cout << "Enter test1[25 point] : ";
	cin >> test1;
	while(test1<0 || test1>25){
		cout <<endl<< "Please Enter test1 Agin!!!" <<endl;
		cout << "Enter test1[25 point] : ";
		cin >> test1;
	}
	
	cout << "Enter test2[25 point] : ";
	cin >> test2;
		while(test2<0 || test2>25){
		cout <<endl<< "Please Enter test2 Agin!!!" <<endl;
		cout << "Enter test2[25 point] : ";
		cin >> test2;
	}
	
	cout << "Enter test3[50 point] : ";
	cin >> test3;
		while(test3<0 || test3>50){
		cout <<endl<< "Please Enter test3 Agin!!!" <<endl;
		cout << "Enter test3[50 point] : ";
		cin >> test3;
	}
	
	total = test1+test2+test3;
	avr=total/3;
}

int average(int search){


return(search);
	
}
