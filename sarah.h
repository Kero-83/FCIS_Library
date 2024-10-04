#pragma once
#include "stdafx.h"

void Log_out(bool& vaild) {
	vaild = false;
    user_index = -1;
    book_selected = -1;
}

void Modify_order() {
    for (int i = 0; i < Students[user_index].borrowed_books_num; i++) {
        cout << i + 1 << "- " << Students[user_index].borrowed_books[i] << endl;
    }
    bool vaild = true;
    int selected_book = -1;
    while (selected_book < 0 || selected_book > Students[user_index].borrowed_books_num) {
        cout << "Those are books you borrowed,\ncheck up your order\nInput 0 if you won't restore any book\n";
        get_int(selected_book);
        if (selected_book == 0) {
            vaild = false;
        }
    }
    if (vaild) {
        for (int i = 0; i < Books_num; i++) {
            if (Students[user_index].borrowed_books[selected_book - 1] == Books[i].name) {
                Books[i].available_to_borrow = true;
                i = Books_num;
            }
        }
        for (int i = selected_book - 1; i < Students[user_index].borrowed_books_num - 1; i++) {
            Students[user_index].borrowed_books[i] = Students[user_index].borrowed_books[i + 1];
        }
        Students[user_index].borrowed_books[Students[user_index].borrowed_books_num - 1].erase();
        Students[user_index].borrowed_books_num--;
    }
}
