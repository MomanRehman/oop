#include <iostream>
using namespace std;
class Order;
class OrderDetails{
private:
    int id;
    int orderId;
    int itemId;
    int quantity;
    Order *order;
public:
    OrderDetails(){
        id=orderId=itemId=quantity=0;
        order=NULL;
        cout<<"Default Constructor!!"<<endl;
    }
    OrderDetails(int id,int orderId,int itemId,int quantity,Order *order){
        this->id=id;
        this->orderId=orderId;
        this->itemId=itemId;
        this->quantity=quantity;
        this->order=order;
        cout<<"Over loaded constructor!!"<<endl;
    }
    int getId(){
        return id;
    }
    void setId(int id){
        OrderDetails::id=id;
    }
    int getOrderId(){
        return orderId;
    }
    void setOrderId(int orderId){
        OrderDetails::orderId=orderId;
    }
    int getItemId(){
        return itemId;
    }
    void setItemId(int itemId){
        OrderDetails::itemId=itemId;
    }
    int getQuantity(){
        return quantity;
    }
    void setQuantity(int quantity){
        OrderDetails::quantity=quantity;
    }
    Order *getOrder() {
        return order;
    }
    void setOrder(Order *order){
        OrderDetails::order=order;
    }
    void display(){
        cout<<"ID="<<id<< " Order ID="<<orderId<<" Item Id="<<itemId<<" Quantity="<<quantity<<endl;
    };
class Order{
private:
    int id;
    string description;
    string createdAt;
    string update;
    string userName;
    string pickUp;
    string pickUpFrom;
    string deliveryTime;
    string deliverTo;
    string status;
    OrderDetails **orderDetails;
    int size;
public:
    Order(){
        id=0;
        description="";
        createdAt="";
        update="";
        userName="";
        pickUp="";
        pickUpFrom="";
        deliveryTime="";
        deliverTo="";
        status="";
        size=5;
        orderDetails=new OrderDetails*[size];
        cout<<"Default Constructor!!"<<endl;
        init();
    }
    void init(){
        for (int i = 0; i < size; ++i) {
            orderDetails[i] = new OrderDetails();
        }
    }
    Order(int id,string description,string createdAt,string update,string userName,string pickUp,string pickUpFrom,string deliveryTime,string deliverTo,string status){
        this->id=id;
        this->description=description;
        this->createdAt=createdAt;
        this->update=update;
        this->userName=userName;
        this->pickUp=pickUp;
        this->pickUpFrom=pickUpFrom;
        this->deliveryTime=deliveryTime;
        this->deliverTo=deliverTo;
        this->status=status;
        orderDetails=new OrderDetails*[size];
        init();
        cout<<"Over loaded constructor!!"<<endl;
    }
    int getId(){
        return id;
    }
    void setId(int id){
        Order::id=id;
    }
    string getDescription(){
        return description;
    }
    void setDescription(string description){
        Order::description=description;
    }
    string getCreatedAt(){
        return createdAt;
    }
    void setCreatedAt(string createdAt){
        Order::createdAt=createdAt;
    }
    string getUserName(){
        return userName;
    }
    void setUserName(string userName){
        Order::userName=userName;
    }
    string getUpdate(){
        return update;
    }
    void setUpdate(string update){
        Order::update=update;
    }
    string getPickUp(){
        return pickUp;
    }
    void setPickUp(string pickUp){
        Order::pickUp=pickUp;
    }
    string getPickUpFrom(){
        return pickUpFrom;
    }
    void setPickUpFrom(string pickUpFrom){
        Order::pickUpFrom=pickUpFrom;
    }
    string getDeliveryTime(){
        return deliveryTime;
    }
    void setDeliveryTime(string deliveryTime){
        Order::deliveryTime=deliveryTime;
    }
    string getDeliverTo(){
        return deliverTo;
    }
    void setDeliverTo(string deliverTo){
        Order::deliverTo=deliverTo;
    }
    string getStatus(){
        return status;
    }
    void setStatus(string status){
        Order::status=status;
    }

};


    class Items{
    private:
        int id;
        string name;
        float price;
        string description;
        string createdAt;
        string updatedAt;
        string type;
    public:
        Items(){
            id=0;
            name="";
            price=0.0;
            description="";
            createdAt="";
            updatedAt="";
            type="";
        }
        Items(int id,string name,float price,string description,string createdAt,string updatedAt,string type){
            this->id=id;
            this->name=name;
            this->price=price;
            this->description=description;
            this->createdAt=createdAt;
            this->updatedAt=updatedAt;
            this->type=type;
        }


    };
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
};
