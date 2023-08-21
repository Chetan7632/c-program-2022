
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string* authors;
    int num_authors;
    float price;
    string publisher;
    int stock;
public:
    Book() {
        authors = NULL;
        num_authors = 0;
        stock = 0;
    }
    void set_title(string t) { title = t; }
    void set_authors(int n) {
        num_authors = n;
        authors = new string[num_authors];
        cout << "Enter " << num_authors << " author names: ";
        for (int i = 0; i < num_authors; i++) {
            cin >> authors[i];
        }
    }
    void set_price(float p) { price = p; }
    void set_publisher(string pub) { publisher = pub; }
    void set_stock(int s) { stock = s; }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Authors: ";
        for (int i = 0; i < num_authors; i++) {
            cout << authors[i] << " ";
        }
        cout << endl;
        cout << "Price: " << price << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock: " << stock << endl;
    }
    void sell(int n) {
        if (n <= stock) {
            stock -= n;
            cout << "Sale successful. " << n << " copies sold." << endl;
        } else {
            cout << "Sale failed. Not enough stock." << endl;
        }
    }
    void purchase(int n) {
        stock += n;
        cout << "Purchase successful. " << n << " copies added to stock." << endl;
    }
    ~Book() {
        if (authors != NULL) {
            delete[] authors;
        }
    }
};

int main() {
    Book book;
    int choice, num_authors, num_copies;
    string title, publisher;
    float price;
    while (true) {
        cout << "1. Accept book details" << endl;
        cout << "2. Sell a book" << endl;
        cout << "3. Purchase a book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter book title: ";
                cin >> title;
                book.set_title(title);
                cout << "Enter number of authors: ";
                cin >> num_authors;
                book.set_authors(num_authors);
                cout << "Enter book price: ";
                cin >> price;
                book.set_price(price);
                cout << "Enter publisher name: ";
                cin >> publisher;
                book.set_publisher(publisher);
                cout << "Enter stock: ";
                cin >> num_copies;
                book.set_stock(num_copies);
                break;
            case 2:
                cout << "Enter number of copies to sell: ";
                cin >> num_copies;
                book.sell(num_copies);
                break;
            case 3:
                cout << "Enter number of copies to purchase: ";
                cin >> num_copies;
                book.purchase(num_copies);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
        book.display();
       

