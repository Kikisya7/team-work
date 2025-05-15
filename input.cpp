#include <iostream>
#include "book.h"
using namespace std;

Book addBook() {
    Book book;
    cout << "Назва книги: ";
    getline(cin, book.title);
    cout << "Автор: ";
    getline(cin, book.author);
    cout << "Рік видання: ";
    cin >> book.year;
    cin.ignore();
    return book;
}