#include <iostream>
using namespace std;
int main(){
    int i,chk,day,month,year,cout_day;
chk=0;
    do{
        if(chk==1){
            cout <<"Please enter day again : ";
        }else{
            cout <<"Please enter day : ";
        }
            cin>>day;
            chk=1;
    }while(day<1 || day>30);
chk=0;
    do{
        if(chk==1){
            cout <<"Please enter month again : ";
        }else{
            cout <<"Please enter month : ";
        }
            cin>>month;
            chk=1;
    }while(month<1 || month>12);
chk=0;
    do{
        if(chk==1){
            cout <<"Please enter year again : ";
        }else{
            cout <<"Please enter year : ";
        }
            cin>>year;
            chk=1;
    }while(year<2513 || year>2599);

    for(i=1;i<month;i++){

        cout_day = (i*30)+day;    //cout day
    }

    year = ((year-2513)*360)-1;   // 1/1/2513 (-1 is day 1 for jan.)
    day = (year + cout_day);
    cout<<endl<<"The difference is about "<< day <<" days.";
    return 0;
}
