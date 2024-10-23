#pragma once
#include <vector>
#include <string>
using namespace std;

class ListManager {
public:
    // Methods
    void listBooks(const vector<string>& books);
    void listReservations(const vector<string>& reservations);
    void listIssues(const vector<string>& issues);
};
