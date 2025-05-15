#include <iostream>
#include <vector>
#include "book.h"

using namespace std;

Book addBook();
void showBooks(const vector<Book>& books);
void searchBooks(const vector<Book>& books, const string& keyword);

int main() {
    vector<Book> library;
    int choice;

    while (true) {
        cout << "\n=== Домашня бібліотека ===\n";
        cout << "1. Додати книгу\n";
        cout << "2. Переглянути всі книги\n";
        cout << "3. Пошук книги\n";
        cout << "4. Вийти\n";
        cout << "Ваш вибір: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Book b = addBook();
            library.push_back(b);
        }
        else if (choice == 2) {
            showBooks(library);
        }
        else if (choice == 3) {
            string keyword;
            cout << "Введіть назву або автора для пошуку: ";
            getline(cin, keyword);
            searchBooks(library, keyword);
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
    }

    return 0;
}