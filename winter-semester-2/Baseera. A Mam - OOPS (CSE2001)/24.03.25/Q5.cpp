#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    string title, author;
    bool isIssued;

    Book(string t, string a) : title(t), author(a), isIssued(false) {}
    void issueBook() { isIssued = true; }
    void returnBook() { isIssued = false; }
    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Available: " << (isIssued ? "No" : "Yes") << endl;
    }
};

int main() {
    vector<Book> library = {Book("Book1", "Author1"), Book("Book2", "Author2")};
    library[0].issueBook();
    for (Book &b : library) b.display();
    return 0;
}