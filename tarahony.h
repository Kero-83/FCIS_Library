#pragma once
#include "stdafx.h"

using namespace std;

void Select_book(int& user_input) {
    do {
        get_int(user_input);
    } while (user_input > Books_num);
    book_selected--;
}

void Modify_Book() {
    Student_view_books();
    // This (from 16 to 19) is written after discussion to fix an Error, Written by Kerolos Sarwat
    while (!Books[book_selected].available_to_borrow && book_selected != -1) {
        cout << "This book is already borrowed so you cannot change its information\nPlease choose another book or choose 0 to back\n";
        Select_book(book_selected);
    } 
    if (book_selected != -1) {
        cout << "1- Change name\n2- Change Code\n3- Change author\n4- Change category\n5- Change edition \n6- Change Statue\n";
        int user_input;
        cout << "Enter a valid choice \n";
        cin >> user_input;
        while (!(user_input >= 0 && user_input <= 6)) {
            cout << "Invaild input!\n";
            cout << "Enter a valid choice \n";
            cin >> user_input;
        }
        if (user_input == 1)
        {
            cout << "Enter Book Name \n";
            string bookName;
            cin >> bookName;
            Books[book_selected].name = bookName;
        }
        else if (user_input == 2)
        {
            cout << "Enter Book Code \n";
            int bookCode;
            get_int(bookCode);
            Books[book_selected].code = bookCode;
        }
        else if (user_input == 3)
        {
            cout << "Enter Book Author \n";
            string bookAuthor;
            cin >> bookAuthor;
            Books[book_selected].author = bookAuthor;
        }
        else if (user_input == 4)
        {
            cout << "Enter book category \n";
            string bookcategory;
            cin >> bookcategory;
            Books[book_selected].category = bookcategory;
        }
        else if (user_input == 5)
        {
            cout << "Enter book edition \n";
            int bookEdition;
            get_int(bookEdition);

            Books[book_selected].edition = bookEdition;
        }
        else if (user_input == 6)
        {
            cout << "Enter 0 if book is taken and 1 if available \n";
            string status;
            cin >> status[0];

            while (status[0] != '0' && status[0] != '1') {
                cout << "Invaild input!\n";
                cin >> status[0];
            }
            Books[book_selected].available_to_borrow = stoi(status);
        }
    }
}