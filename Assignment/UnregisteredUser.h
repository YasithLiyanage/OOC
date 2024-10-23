#pragma once
#include <string>
using namespace std;

class UnregisteredUser {
private:
    string name;
    string email;
    int contactNo;

public:
    // Default constructor
    UnregisteredUser();

    // Parameterized constructor
    UnregisteredUser(string uName, string uEmail, int uContactNo);

    // Getters and Setters
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
