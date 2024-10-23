#pragma once
#include <string>
using namespace std;

class ListManager;  
class Member;       

class UnregisteredUser {
private:
    std::string name;
    std::string email;
    int contactNo;
    
    ListManager* listManager;  // Pointer to ListManager
    Member* member;            // Pointer to Member

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
