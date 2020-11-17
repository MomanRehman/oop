#include <iostream>
using namespace std;

class date{
private:
    int day;
    int month;
    int year;
public:
    date(){
        day=month=year=0;
    }
    date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
    void setDay(int d){
        day=d;
    }
    void setMonth(int m){
        month=m;
    }
    void setYear(int y){
        year=y;
    }
    void display()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    date validate(){
        if(day>30){
            day=1;
        }
        if(month>12){
            month=1;
        }
        if(year<=0){
            year=2020;
        }
       cout<<"After Validation"<<endl;
        cout<<day<<"/"<<month<<"/"<<year<<endl;

    }
    date nextday(){
        for(int x=0;x<40;x++){
            day=day+1;
            if(day>30){
                month=month+1;
                day=1;
            }
            if(month>12){
                year=year+1;
                month=1;
            }
           cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
    }


};
int main() {
date d1(10,12,2000);
d1.display();
d1.validate();
d1.nextday();
return 0;
}
