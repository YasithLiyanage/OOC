#include "ListManager.h"
#include <iostream>
using namespace std;

// Method to list all books
void ListManager::listBooks(const vector<string>& books) {
    cout << "Listing books:" << endl;
    for (const auto& book : books) {
        cout << "- " << book << endl;
    }
}

// Method to list all reservations
void ListManager::listReservations(const vector<string>& reservations) {
    cout << "Listing reservations:" << endl;
    for (const auto& reservation : reservations) {
        cout << "- " << reservation << endl;
    }
}

// Method to list all issues
void ListManager::listIssues(const vector<string>& issues) {
    cout << "Listing issues:" << endl;
    for (const auto& issue : issues) {
        cout << "- " << issue << endl;
    }
}
