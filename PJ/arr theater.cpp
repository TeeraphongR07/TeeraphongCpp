#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	
	int i,j;
	int arg,sti,obn, ar[obn][arg][sti][i][j];
	char ch;
	
	
	cout << "Enter theater 1 2 3 4 : ";
	cin >> obn;
	for(i=0;i<7;i++){
	    ch='A';
	    ch=ch+i;
	    cout<<"\t";  
	for(j=0;j<18;j++){
		if(ar[obn][arg][sti][i][j]==1)
            cout<<"["<<" X"<<"]";
            else
            {
                cout<<"["<<ch<<j+1<<"]";
            }
		
		if(j==4||j==12)
        cout<<"\t";
	}
	    
	cout<<"\n\n";
if(i==6)
    {
        cout<<"\n\n\t\t\t\t\t\t SCREEN THIS WAY\n";
        cout<<"\t______________________________________________________________________________________________________________";
    }
	}


return(0);
}
