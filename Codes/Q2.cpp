#include <iostream>
#include <string>

class Event {

    private : 
        int eventId;
        std::string eventType;
        std::string eventColor;
        std::string location;

    public :
        void setEventDetails();
        void displayEventDetails();
        void setEventLocation();



};

void Event::setEventDetails(int eID, std::string eType,std::string eColor,std::string location){

eventId = eID;
eventType = eType;
eventColor = eColor;
eventlocation = location;



}
  
void Event::displayEventDetails(){

    cout 

}