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

// Methods
void UnregisteredUser::searchBook() {
    // Code to search a book
    cout << "Unregistered user searching for a book." << endl;
}

void UnregisteredUser::viewBookDetails() {
    // Code to view book details
    cout << "Unregistered user viewing book details." << endl;
}

void UnregisteredUser::membershipRegistration() {
    // Code for membership registration
    cout << "Membership registration process initiated." << endl;
}

void UnregisteredUser::payDeposit() {
    // Code to pay deposit for membership
    cout << "Unregistered user paying deposit for membership." << endl;
}

void UnregisteredUser::requestSupport() {
    // Code to request support
    cout << "Unregistered user requesting support." << endl;
}
