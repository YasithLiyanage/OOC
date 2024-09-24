#include <iostream>
#include <cstring>
using namespace std;

class Item {

    private :
        int itemCode;
        char name[20];
        float price;

    public : 
        void setItemDetails(int no,char pName[]);
        void setPrice(float pPrice);
        int getItemCode();
        float getPrice();


};


void Item::setItemDetails(int no, char pName[])
{
    itemCode = no;
    strcpy(name,pName);

}

void Item::setPrice(float pPrice)
{
    price = pPrice;
}

int Item::getItemCode()
{
    return itemCode;
}

float Item::getPrice()
{
    return price;
}


int main(){

    Item itm1;

    int i_code;
    char i_name[20];
    float i_price;

    cout << "Input item code : ";
    cin >> i_code;
    cout << "Input Item name : ";
    cin >> i_name;
    cout << "Input item price : ";
    cin >> i_price;

    itm1.setItemDetails(i_code, i_name);
    itm1.setPrice(i_price);

    cout << "Item Code " << itm1.getItemCode() << endl;
    cout << "ITem Price" << itm1.getPrice() << endl;

    return 0;
}
