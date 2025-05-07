#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float price;

public:
    Book(int id, string t, string a, float p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    void displayDetails() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    Book* books[n];

    for (int i = 0; i < n; i++) {
        int id;
        string title, author;
        float price;

        cout << "Enter details for Book " << i + 1 << ":" << endl;
        cout << "Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Title: ";
        getline(cin, title);
        cout << "Author: ";
        getline(cin, author);
        cout << "Price: ";
        cin >> price;

        books[i] = new Book(id, title, author, price);
    }

    cout << "\nDisplaying Book Details:\n";
    for (int i = 0; i < n; i++) {
        books[i]->displayDetails();
        delete books[i];
    }

    return 0;
}
