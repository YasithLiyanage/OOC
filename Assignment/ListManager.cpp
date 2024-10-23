#include "ListManager.h"
#include <iostream>
using namespace std;

void ListManager::listBooks() {
    cout << "Listing books." << endl;
}

// Method to list books
void ListManager::listBooks(const string books[], int bookCount) {
    cout << "Listing all books:" << endl;
    for (int i = 0; i < bookCount; i++) {
        cout << (i + 1) << ". " << books[i] << endl;
    }
}

// Method to list reservations
void ListManager::listReservations(const string reservations[], int resCount) {
    cout << "Listing all reservations:" << endl;
    for (int i = 0; i < resCount; i++) {
        cout << (i + 1) << ". " << reservations[i] << endl;
    }
}

// Method to list issues
void ListManager::listIssues(const string issues[], int issueCount) {
    cout << "Listing all issues:" << endl;
    for (int i = 0; i < issueCount; i++) {
        cout << (i + 1) << ". " << issues[i] << endl;
    }
}
