#include <iostream>
#include <cmath>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point(){
        x=y=0;
    }
    Point(int a, int b){
      x=a;
      y=b;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void setX() {
        label:
        cout << "X axis point:";
        cin >> x;
        if (x > 20.0 || x < 0.0) {
            cout << "Wrong input please enter between 0.0-20.0" << endl;
            goto label;
        }
    }
        void setY() {
            label:
            cout << "Y axis point:";
            cin >> y;
            if (y > 20.0 || y < 0.0) {
                cout << "Wrong input please enter between 0.0-20.0" << endl;
                goto label;
            }
        }
    };
class Rectangle{
private:
    Point left,right,left1,right1;
public:
    Rectangle(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4):left(x1,y1),right(x2,y2),left1(x3,y3),right1(x4,y4){
  }
 
 
     int getSq(int t){
        return t*t;
}
float getLength(){
        float l=sqrt(getSq(left1.getX()-right.getX())+getSq(left1.getY()-right.getY()));
        return l;
    }
    float getWidth(){
        float w=sqrt(getSq(left.getX()-right.getX())+getSq(left.getY()-right.getY()));
        return w;
    }
    float area(){
        return getLength() * getWidth();
    }
    float perimeter(){
        return 2*(getWidth()+getLength());
    }
    void square(){
    if(getLength()==getWidth()){
        cout<<"Rectangle is square"<<endl;
    }
    else{
    cout<<"Rectangle is not square"<<endl;
    }
}
  void display(){
        cout<<"Length  : "<<getLength()<<endl;
        cout<<"Width  : "<<getWidth()<<endl;
        cout<<"Area : "<<area()<<endl;
        cout<<"Perimeter : "<<perimeter()<<endl;
        square();
    }

 Rectangle vali(){
 
    if(left1.getX()>20 || left1.getX()<0 || left1.getY()>20 || left1.getY()<0 || left.getX()>20 || left.getX()<0 || right.getX()>20 || right.getX()<0 || right1.getX()>20 || right1.getX()<0)
{
	cout<<"Invalid input"<<endl;
}
else{
	display();
}


  
}
};




int main() {
  Rectangle rectangle(20,20,10,5,8,25,30,9);
    
  rectangle.vali();
    return 0;
}
