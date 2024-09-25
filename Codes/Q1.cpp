#include <iostream>
using namespace std;
class Course{
private:
int courseID;
string courseName;
int creditPoints;
public:
void setCourseDetails(int cid, string cname, int cpt);
void displayCourseDetails();
void setCreditPoints();
};
void Course::setCourseDetails(int cid, string cname, int cpt)
{courseID = cid;
courseName = cname;
creditPoints = cpt;
}
void Course::displayCourseDetails()
{
cout << "Course ID = " << courseID << endl
<< "CourseName = " << courseName << endl
<< "CreditPoint = " << creditPoints << endl<<endl;
}
void Course::setCreditPoints()
{
cout << "Input new "<< courseName <<" credit points : ";
cin >> creditPoints;

}
int main ()
{
Course c1,c2,c3,c4;

c1.setCourseDetails(1050,"OOC",2);
c2.setCourseDetails(1060,"SPM",3);
c3.setCourseDetails(1100,"IWT",4);
c4.setCourseDetails(1090,"ISDM",4);


c1.setCreditPoints();
c2.setCreditPoints();
c3.setCreditPoints();
c4.setCreditPoints();

cout<<endl;

c1.displayCourseDetails();
c2.displayCourseDetails();
c3.displayCourseDetails();
c4.displayCourseDetails();





return 0;

}

