#include<iostream>
#include<string>
#include <Windows.h>
using namespace std;

class time{
	private: 
	int hour,minute,second;
	string day;
 bool f = true;
	public:
		time(){
			hour=0;
			minute=0;
			second=0;
			day="";
		}
		time(int h,int m, int s,string d)
		{
			hour=h;
			minute=m;
			second=s;
		  day=d;
		}
		void display(){
			cout<<hour<<":"<<minute<<":"<<second<<" "<<day<<endl;
		}
		time tick(){
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
								if(hour==12 && day=="AM"){
					day="PM";
				}
				else{
					day="AM";
				}
				}
				

				if (hour==13){
					hour=1;
				}
				
				cout<<hour<<":"<<minute<<":"<<second<<" "<<day<<endl;
			}
			
		}
if(hour!=12 && day=="PM")	{
			
			hour=hour+12;
			cout<<"In universal format="<<hour<<":"<<minute<<":"<<second<<endl;
		}else{
		
		cout<<"In universal format="<<hour<<":"<<minute<<":"<<second<<endl;
	}
   }
};
			
int main(){
	time t1(11,59,57,"PM");
	t1.display();
	t1.tick();
	return 0;
}
