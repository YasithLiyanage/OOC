#include <iostream>
using namespace std;


class Salesman(){

    private :
        int salesmanId;
        string salesmanName;
        float salary;
        int contactNo;


    public : 
        void setSalesmanDetails(int sID, string sNamem, float sal);
        void displaySalesmanDetails();
        void setSalesmanContactNo();


};


void Salesman::setSalesmanDetails(int sID, string sNamem, float sal, int cNo){

    salesmanId = sID;
    salesmanName = sName;
    salary = sal;
    contactNo = cNo;



}

void Salesman::setSalesmanContactNo(int cNo){

    cout << "input contact num" << salesmanID << ": ";
    cin>>contactNo;

}

void displaySalesmanDetails(){

    cout << "SalesmanId = " << salesmanId << endl
    << "salesmanName = " << salesmanName << endl
    << "salary = " << salary << endl
    << "ContactNo = " << contactNo << endl <<endl;

}






int main(){

    Salesman *s1 = new Salesman();
    Salesman *s2 = new Salesman();
    Salesman *s3 = new Salesman();
    


    s1->setSalesmanDetails(1,"John",30000,772358375);
    s2->setSalesmanDetails(2,"Ann",40000,773029452);
    s3->setSalesmanDetails(3,"Leema",35000,778294526);


    s1->setSalesmanContactNo();
    s2->setSalesmanContactNo();
    s3->setSalesmanContactNO();

    cout << endl;


    s1->displaySalesmanDetails();
    s2->displaySalesmanDetails();
    s3->displaySalesmanDetails();



    delete s1,s2,s3;


    return 0;
}

