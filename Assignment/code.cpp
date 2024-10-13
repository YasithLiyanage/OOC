
class User {
private:
    int user_id;
    std::string username;
    std::string role;

public:
    User(int id, std::string name, std::string role);
    void viewBooks();
};

User::User(int id, std::string name, std::string role) : user_id(id), username(name), role(role) {}

void User::viewBooks() {
    // method to view books
}

class Book {
private:
    int book_id;
    std::string title;
    std::string author;

public:
    Book(int id, std::string title, std::string author);
    void addBook();
    void updateBook();
};

Book::Book(int id, std::string title, std::string author) : book_id(id), title(title), author(author) {}

void Book::addBook() {
    // method to add a book
}

class Reservation {
private:
    int reservation_id;
    int book_id;
    int user_id;

public:
    Reservation(int res_id, int book, int user);
    void createReservation();
};

Reservation::Reservation(int res_id, int book, int user) : reservation_id(res_id), book_id(book), user_id(user) {}

void Reservation::createReservation() {
    // method to create reservation
}
