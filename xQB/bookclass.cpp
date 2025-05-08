#include <iostream>
using namespace std;

class Book {
public:
    int bookid;
    string title;
    string author;
    float price;

    Book(int bid, string t, string a, float pr) {
        bookid = bid;
        title = t;
        author = a;
        price = pr;
    }

    void display() {
        cout << "BookID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    string title, auth;
    int id;
    float prce;
    cout << "Enter book id: ";
    cin >> id;
    cout << "Enter title: ";
    cin >> ws;
    getline(cin, title);
    cout << "Enter author: ";
    cin >> ws;
    getline(cin, auth);
    cout << "Enter price: ";
    cin >> prce;
    Book b1(id, title, auth, prce);
    b1.display();
}
