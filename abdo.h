#pragma once
#include "stdafx.h"

void Student_view_books() {
	for (int i = 0; i < Books_num; i++) {
		cout << i + 1 << " - " << "Book#" << Books[i].code << " " << Books[i].name << " to the author " << Books[i].author << " Edition #" << Books[i].edition << " Category: " << Books[i].category;
		if (Books[i].available_to_borrow)
			cout << " Avilable\n";
		else
			cout << " Not avilable\n";
	}
	cout << "0 - Back\n";
	Select_book(book_selected);
}

void Student_edit_info(student &x) {
	cout << "Enter a vaild Input\n";
	cout << "1- Change Username\n2- Change Password\n3- Change Email\n0- Back\n";
	int choose; 
	do {
		get_int(choose);
		if (choose == 1) {
			cout << "Enter your new Username: ";
			cin >> x.first_name;
			cin >> x.last_name;
		}
		else if (choose == 2) {
			cout << "Enter your new Password: ";
			getPassword('*', x.password); cout << endl;
		}
		else if (choose == 3) {
			cout << "Enter your new Email: ";
			cin >> x.email;
		}
		else if (choose == 0);
		else {
			cout << "\nInvaild input please enter again\n";
		}
	} while (choose > 3);
	cout << "Done!\n\n";
}
