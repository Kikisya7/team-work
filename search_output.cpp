#include <iostream>
#include <vector>
#include "book.h"
using namespace std;

void showBooks(const vector<Book>& books) {
    if (books.empty()) {
        cout << "Бібліотека порожня.\n";
        return;
    }
    for (const auto& book : books) {
        cout << "Назва: " << book.title << endl;
        cout << "Автор: " << book.author << endl;
        cout << "Рік: " << book.year << endl;
        cout << "----------------------\n";
    }
}

void searchBooks(const vector<Book>& books, const string& keyword) {
    bool found = false;
    for (const auto& book : books) {
        if (book.title.find(keyword) != string::npos ||
            book.author.find(keyword) != string::npos) {
            cout << "Знайдено книгу:\n";
            cout << "Назва: " << book.title << endl;
            cout << "Автор: " << book.author << endl;
            cout << "Рік: " << book.year << endl;
            cout << "----------------------\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Книги не знайдено за запитом: " << keyword << endl;
    }
}