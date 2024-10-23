#include "Member.h"
#include <iostream>
using namespace std;

// Default constructor
Member::Member() {
    name = "";
    memberID = 0;
    username = "";
    password = "";
    email = "";
    memberType = "";
    deposit = 0.0;
    contactNo = 0;
}

// Parameterized constructor
Member::Member(string mName, int mID, string mUsername, string mPassword, string mEmail, string mType, double mDeposit, int mContactNo) {
    name = mName;
    memberID = mID;
    username = mUsername;
    password = mPassword;
    email = mEmail;
    memberType = mType;
    deposit = mDeposit;
    contactNo = mContactNo;
}

// Getters and Setters
void Member::setName(string mName) { name = mName; }
string Member::getName() const { return name; }

void Member::setMemberID(int mID) { memberID = mID; }
int Member::getMemberID() const { return memberID; }

void Member::setUsername(string mUsername) { username = mUsername; }
string Member::getUsername() const { return username; }

void Member::setPassword(string mPassword) { password = mPassword; }
string Member::getPassword() const { return password; }

void Member::setEmail(string mEmail) { email = mEmail; }
string Member::getEmail() const { return email; }

void Member::setMemberType(string mType) { memberType = mType; }
string Member::getMemberType() const { return memberType; }

void Member::setDeposit(double mDeposit) { deposit = mDeposit; }
double Member::getDeposit() const { return deposit; }

void Member::setContactNo(int mContactNo) { contactNo = mContactNo; }
int Member::getContactNo() const { return contactNo; }

// Methods
void Member::searchBook() {
    // Code to search a book
}

void Member::viewBookDetails() {
    // Code to view book details
}

void Member::reserveBook() {
    // Code to reserve a book
}

void Member::borrowBook() {
    // Code to borrow a book
}

void Member::returnBook() {
    // Code to return a borrowed book
}

void Member::payFine() {
    // Code to pay fine for overdue books
}

void Member::viewBorrowedBooks() {
    // Code to view past borrowed books
}

void Member::requestSupport() {
    // Code to request support
}

void Member::reportIssue() {
    // Code to report an issue
}

void Member::updateProfile() {
    // Code to update profile details
}

void Member::viewProfile() {
    cout << "Member Name: " << name << endl;
    cout << "Member ID: " << memberID << endl;
    cout << "Username: " << username << endl;
    cout << "Email: " << email << endl;
    cout << "Member Type: " << memberType << endl;
    cout << "Deposit: $" << deposit << endl;
    cout << "Contact Number: " << contactNo << endl;
}
