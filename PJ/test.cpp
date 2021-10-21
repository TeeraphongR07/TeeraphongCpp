#include<iostream>
using namespace std;
int main(){
	int menu;
	cout << "\t\t ******************************" <<endl;
	cout << "\t\t *                            *" <<endl;
	cout << "\t\t *       CINEMA Ticket        *" <<endl;
	cout << "\t\t *      Project IT KMUTNB     *" <<endl;
	cout << "\t\t *                            *" <<endl;
	cout << "\t\t ******************************" << "\n\n";
	cout <<"\t\t    welcome to Cinema ticket    " << "\n\n\n";
	
	cout << "\t\t" << "1. Book A Ticket" <<endl;
	cout << "\t\t" << "2. Cancel A Ticket" <<endl;
	cout << "\t\t" << "3. Celect A Theater" <<endl;
	cout << "\t\t" << "4. Show Report" <<endl;
	cout << "\t\t" << "5. Exit" <<endl;
	
	cout << "Enter You choice: ";
	cin >> menu; 
	
	switch(menu) {
		case 1:
			cout << "You Select Book A Ticket" ;
			break;
		case 2:
			cout << "You Select Cancel A Ticket" ;
			break;
		case 3:
			cout << "You Select A Theater" ;
			break;
		case 4:
			cout << "You Select Show Report" ;
			break;
		default:
    		cout << "Please Chooice again";
	} 
	
	return(0);
}
