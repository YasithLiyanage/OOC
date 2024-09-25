#include <iostream>
using namespace std;

class Patient {

    private : 
        int appointmentID;
        string patientName;
        float doctorCharge;
        float hospitalCharge;

    public :
        void setPatientDetails(int aID, string pName);
        void displayPatientDetails();
        void setdoctorCharge(float dCharge);
        void sethospitalCharge(float hCharge);
        float calculateTotalPayment();

};



void Patient::setPatientDetails(int aID, string pName){

appointmentID = aID;
patientName = pName;

}

void Patient::setdoctorCharge(float dCharge){

doctorCharge = dCharge;

}

void Patient::sethospitalCharge(float hCharge){

hospitalCharge = hCharge;

}

void Patient::displayPatientDetails(){

cout << "Appointment ID = " << appointmentID << endl 
<< "Patient Name = " << patientName << endl;

}

float Patient::calculateTotalPayment(){

    return doctorCharge + hospitalCharge;

}


int main (){


    Patient p1,p2;

    p1.setPatientDetails(1001,"Nimal");
    p1.setdoctorCharge(1500);
    p1.sethospitalCharge(500);

    p2.setPatientDetails(1002,"Sunil");
    p2.setdoctorCharge(1700);
    p2.sethospitalCharge(500);


    p1.displayPatientDetails();
    cout << "Total Payment = " << p1.calculateTotalPayment() << endl << endl;

    p2.displayPatientDetails();
    cout << "Total Payment = " << p2.calculateTotalPayment() << endl;
return 0;









}
