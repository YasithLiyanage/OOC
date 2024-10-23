#include "UnregisteredUser.h"
#include <iostream>
using namespace std;

// Default constructor
UnregisteredUser::UnregisteredUser() {
    name = "";
    email = "";
    contactNo = 0;
}

// Parameterized constructor
UnregisteredUser::UnregisteredUser(string uName, string uEmail, int uContactNo) {
    name = uName;
    email = uEmail;
    contactNo = uContactNo;
}

// Getters and Setters
void UnregisteredUser::setName(string uName) { name = uName; }
string UnregisteredUser::getName() const { return name; }

void UnregisteredUser::setEmail(string uEmail) { email = uEmail; }
string UnregisteredUser::getEmail() const { return email; }

void UnregisteredUser::setContactNo(int uContactNo) { contactNo = uContactNo; }
int UnregisteredUser::getContactNo() const { return contactNo; }


void UnregisteredUser::searchBook() {

    cout << "Unregistered user searching for a book." << endl;
}

void UnregisteredUser::viewBookDetails() {

    cout << "Unregistered user viewing book details." << endl;
}

void UnregisteredUser::membershipRegistration() {
    
    cout << "Membership registration process initiated." << endl;
}

void UnregisteredUser::payDeposit() {
    
    cout << "Unregistered user paying deposit for membership." << endl;
}

void UnregisteredUser::requestSupport() {
    
    cout << "Unregistered user requesting support." << endl;
}
