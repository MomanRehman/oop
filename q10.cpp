#include <iostream>
using namespace std;
class HugeInteger {
private:
    int arr[40];
    int size;
public:
    HugeInteger(){
        init();
        size=0;
    }
    HugeInteger(string huge){
        size=0;
        init();
        size=huge.length();
        int len;
        len=40-size;
        for(int i=len, j=0;i<40;i++,j++){
            arr[i]=huge[j]-48;
        }
    }
    void init(){
        for (int i = 0; i < 40 ; ++i) {
            arr[i] = 0;
        }
    }
    void input(string huge1){
size=0;
        size=huge1.length();
        int x;
        x=40-size;
        for(int i=x, j=0;i<40;i++,j++){
            arr[i]=huge1[j]-48;
        }
    }
    void display(){
        for (int i = 0; i < 40; ++i) {
            if(arr[i] != 0 )
                cout<<arr[i];
        }
        cout<<endl;
    }
     void display1(){
        for (int i = 0; i < 40; ++i) {
                cout<<arr[i];
        }
        cout<<endl;
    }
    HugeInteger add(HugeInteger h){
        HugeInteger out;
        int t;
        t=0;
        for(int i=39; i>=0;i--) {
            out.arr[i] = out.arr[i]+this->arr[i] + h.arr[i]+t;
            if (out.arr[i] > 9) {
                out.arr[i] = out.arr[i] -10;
                out.arr[i-1]=out.arr[i-1]+1;
            }
            }

        cout<<"Addition:";
        return out;
    }
    HugeInteger sub(HugeInteger h){
        HugeInteger out;
      for(int i=39;i>=0;i--){
      if(arr[i]<h.arr[i]){
      	arr[i-1]=arr[i-1]-1;
      	arr[i]=arr[i]+10;

	  }
	  
	  out.arr[i]=this->arr[i]-h.arr[i];
}
	    
        cout<<endl;
        cout<<"Subtraction:";
        return out;
    }
    bool equalTo(HugeInteger h){
    	bool res=true;
        for(int i=0;i<=39;i++){
        	if(this->arr[i]!=h.arr[i]){
        		res=false;
			}
		}
		return res;
	}
	 bool notEqualTo(HugeInteger h){
    	bool res=false;
        for(int i=0;i<=39;i++){
        	if(this->arr[i]!=h.arr[i]){
        		res=true;
			}
		}
		return res;
	}
	 bool less(HugeInteger h){
    	bool res=false;
        for(int i=0;i<=39;i++){
        	if(this->arr[i]<h.arr[i]){
        		res=true;
			}
		}
		return res;
	}
	 bool great(HugeInteger h){
    	bool res=false;
        for(int i=0;i<=39;i++){
        	if(this->arr[i]>h.arr[i]){
        		res=true;
			}
		}
		return res;
	}
};
int main() {
    HugeInteger hugeInteger1;
    HugeInteger hugeInteger2;
    HugeInteger h3,h4;
    int h,h5,h6,h7;
    hugeInteger1.input("12343");
    hugeInteger2.input("12345");
    hugeInteger1.display();
    cout<<endl;
    hugeInteger2.display();
   h3= hugeInteger1.add(hugeInteger2);
   h3.display1();
    h4= hugeInteger1.sub(hugeInteger2);
       h4.display1();
      cout << "Is HugeInteger 1 is equal to HugeInteger 2: 0=false, 1=true?"<<endl;
      h=hugeInteger1.equalTo(hugeInteger2);
      cout<<h<<endl;
            cout << "Is HugeInteger 1 is not equal to HugeInteger 2: 0=false, 1=true?"<<endl;
h5=hugeInteger1.notEqualTo(hugeInteger2);
cout<<h5<<endl;
  cout << "Is HugeInteger 1 is less than to HugeInteger 2: 0=false, 1=true?"<<endl;
h6=hugeInteger1.less(hugeInteger2);
cout<<h6<<endl;
  cout << "Is HugeInteger 1 is less than to HugeInteger 2: 0=false, 1=true?"<<endl;
h7=hugeInteger1.great(hugeInteger2);
cout<<h7<<endl;
      	
      	
	  
      
    return 0;
}
