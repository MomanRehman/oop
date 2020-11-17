#include <iostream>
#include<string>
#include <Windows.h>
using namespace std;

class DateAndTime{
private:
    int hour,minute,second;
    string zone;
    bool f = true;
    int day;
    int month;
    int year;
public:
    DateAndTime(){
        hour=0;
        minute=0;
        second=0;
        zone="";
        day=month=year=0;
    }
    DateAndTime(int h,int mi, int s,string z,int d,int m,int y)
    {
        hour=h;
        minute=mi;
        second=s;
        zone=z;
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
    void display(){
        cout<<hour<<":"<<minute<<":"<<second<<" "<<zone<<endl;
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    DateAndTime tick(){
        while (f)
        {
            if (GetAsyncKeyState(VK_UP)){
                f=false;
            }
            else{
                second=second+1;
                if(second==60){
                    minute=minute+1;
                    second=0;
                }


                if(minute==60){
                    hour=hour+1;
                    minute=0;
                    if(hour==12 && zone=="AM"){
                        zone="PM";
                    }
                    else{
                        zone="AM";
                        day=day+1;
                    }
                }


                if (hour==13){
                    hour=1;
                }
                if(day>30){
                    month=month+1;
                    day=1;
                }
                if(month>12){
                    year=year+1;
                    month=1;
                }

                cout<<hour<<":"<<minute<<":"<<second<<" "<<zone<<endl;
                cout<<day<<"/"<<month<<"/"<<year<<endl;
            }

        }
    }
    DateAndTime validate(){
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
};
int main() {
DateAndTime d1(11,59,57,"PM",10,12,2000);
d1.display();
d1.validate();
d1.tick();
    return 0;
}
