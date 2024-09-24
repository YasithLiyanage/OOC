#include <iostream>
using namespace std;


class Course {

    private : 
        int courseID;
        char courseName[20];
        int creditPoints;

    public : 
        void setCourseDetails(int cID, char Cname, int cpt);
        char displayCourseDetails();
        void setCreditPoints(int cPoints);

};

void Course::setCourseDetails(int cID, char Cname, int cpt){

    CourseID = cID;
    strcpy(courseName,Cname);
    creditPoints = cpt;

}