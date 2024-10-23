#pragma once
#include <string>
using namespace std;

class UnregisteredUser {
private:
    string name;
    string email;
    int contactNo;

public:
    // Constructors
    UnregisteredUser();
    UnregisteredUser(string uName, string uEmail, int uContactNo);

    // Getters and setters
    void setName(string uName);
    string getName() const;

    void setEmail(string uEmail);
    string getEmail() const;

    void setContactNo(int uContactNo);
    int getContactNo() const;

    // Methods
    void searchBook();
    void viewBookDetails();
    void membershipRegistration();
    void payDeposit();
    void requestSupport();
};
