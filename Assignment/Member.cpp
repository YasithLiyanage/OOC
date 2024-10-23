#include "Member.h"
#include <iostream>
using namespace std;

//  constructor
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

// Methods (implementations)
void Member::searchBook() {
    cout << "Searching for a book." << endl;
}

void Member::viewBookDetails() {
    cout << "Viewing book details." << endl;
}

void Member::reserveBook() {
    cout << "Reserving a book." << endl;
}

void Member::borrowBook() {
    cout << "Borrowing a book." << endl;
}

void Member::returnBook() {
    cout << "Returning a book." << endl;
}

void Member::payFine() {
    cout << "Paying fine for overdue books." << endl;
}

void Member::viewBorrowedBooks() {
    cout << "Viewing past borrowed books." << endl;
}

void Member::requestSupport() {
    cout << "Requesting support." << endl;
}

void Member::reportIssue() {
    cout << "Reporting an issue." << endl;
}

void Member::updateProfile() {
    cout << "Updating profile details." << endl;
}

void Member::viewProfile() {
    cout << "Viewing profile details." << endl;
}
