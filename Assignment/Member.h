#pragma once
#include <string>
#include <vector>
using namespace std;

class Member {
private:
    string name;
    int memberID;
    string username;
    string password;
    string email;
    string memberType;
    double deposit;
    int contactNo;

public:
    // Constructors
    Member();
    Member(string mName, int mID, string mUsername, string mPassword, string mEmail, string mType, double mDeposit, int mContactNo);

    // Getters and setters
    void setName(string mName);
    string getName() const;

    void setMemberID(int mID);
    int getMemberID() const;

    void setUsername(string mUsername);
    string getUsername() const;

    void setPassword(string mPassword);
    string getPassword() const;

    void setEmail(string mEmail);
    string getEmail() const;

    void setMemberType(string mType);
    string getMemberType() const;

    void setDeposit(double mDeposit);
    double getDeposit() const;

    void setContactNo(int mContactNo);
    int getContactNo() const;

    // Methods
    void searchBook();
    void viewBookDetails();
    void reserveBook();
    void borrowBook();
    void returnBook();
    void payFine();
    void viewBorrowedBooks();
    void requestSupport();
    void reportIssue();
    void updateProfile();
    void viewProfile();
};

