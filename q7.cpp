#include <iostream>
using namespace std;
class Rectangle{
private:
    float width;
    float length;
public:
    Rectangle(){
        width=1.0;
        length=1.0;
    }
    void setWidth(){
        label:
        cout<<"Enter width:";
        cin>>width;
        if(width>20.0 || width<0.0){
            cout<<"Wrong input please enter between 0.0-20.0"<<endl;
            goto label;
        }
    }
    void setLength(){
        label:
        cout<<"Enter length:";
        cin>>length;
        if(length>20.0 || length<0.0){
            cout<<"Wrong input please enter between 0.0-20.0"<<endl;
            goto label;
        }
    }
    float getWidth(){
        return width;
    }
    float getLength(){
        return length;
    }
    float area(){
        return width*length;
    }
    float perimeter(){
        return 2*(width+length);
    }
    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }
};
int main() {
Rectangle r;
r.setLength();
r.setWidth();
r.display();
    return 0;
}
