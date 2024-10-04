#pragma once
#include "stdafx.h"

void Add_book() {
	cout << "\n ADD A NEW BOOK  ";
	cout << "\n\n Please enter book name: ";
	cin >> Books[Books_num].name;
	cout << "\n Please enter book author: ";
	cin >> Books[Books_num].author;
	cout << "\n Please enter book category: ";
	cin >> Books[Books_num].category;
	cout << "\n Please enter book code : ";
	get_int(Books[Books_num].code);
	cout << "\n Please enter the edition of the book: ";
	get_int(Books[Books_num].edition);
	cout << "\n===============================\n";
	Books_num++;
}

void Delete_book() {
	Student_view_books();
	// This (from line 23 to line 26) is written after discussion to fix an Error, Written by Kerolos Sarwat
	while (!Books[book_selected].available_to_borrow && book_selected != -1) {
        cout << "This book is already borrowed so you cannot delete it\nPlease choose another book or choose 0 to back\n";
        Select_book(book_selected);
    } 
	if (book_selected >= 0) {
		for (int j = book_selected; j < Books_num; j++) {
			Books[j].name = Books[j + 1].name;
			Books[j].author = Books[j + 1].author;
			Books[j].category = Books[j + 1].category;
			Books[j].code = Books[j + 1].code;
			Books[j].available_to_borrow = Books[j + 1].available_to_borrow;
			Books[j].edition = Books[j + 1].edition;
		}
		Books_num--;
	}
}

