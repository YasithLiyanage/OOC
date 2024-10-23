#pragma once
#include <string>
using namespace std;

class ListManager {
public:
    // Methods for listing
    void listBooks(const string books[], int bookCount);
    void listReservations(const string reservations[], int resCount);
    void listIssues(const string issues[], int issueCount);
};
