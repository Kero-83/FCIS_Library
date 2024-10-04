#include "FCIS_Library_Alternate.h"

int main(void) {
	Restore_All(); // Restoring Arrays from files
	bool w1 = true, w2 = true;  // System Widgets
	while (w1) {
		w2 = true;
		cout << "1- Log In As Student\n2- Log In As Admin\n3- Exit program\n";
		cin >> user_input;
		if (user_input == "1") {
			logInAsStudent(w2);
			while (w2) {
				cout << "1- View books\n2- Edit information\n3- Modify order\n4- Log out\n";
				cin >> user_input;
				if (user_input == "1") {
					Student_view_books();
					bool w3 = true;
					if (book_selected == -1);
					else if (Books[book_selected].available_to_borrow) {
						w3 = true;
						cout << "Would you like to borrow " << Books[book_selected].name << "?\nyes write y,\nno write n\n";
						while (w3)
						{
							cin >> user_input;
							if (user_input == "y") {
								w3 = false;
								Books[book_selected].available_to_borrow = 0;
								Students[user_index].borrowed_books[Students[user_index].borrowed_books_num] = Books[book_selected].name;
								Students[user_index].borrowed_books_num++;
								cout << "You have borrowed " << Books[book_selected].name << " Successfully.\n";
							}
							else if (user_input == "n") {}
							else
							{
								cout << "Wrong Input!\nPlease, Enter y if you want to borrow or n you don't want to borrow\n";
							}
						}
					}
					else {
						cout << "Sorry, It's currently unavailable.\n\n";
					}
				}
				else if (user_input == "2") {
					Student_edit_info(Students[user_index]);
				}
				else if (user_input == "3") {
					Modify_order();
				}
				else if (user_input == "4") {
					Log_out(w2);
				}
				else {
					cout << "Wrong Input!\n";
				}
			}
		}
		else if (user_input == "2") {
			logInAsAdmin();
			while (w2) {
				cout << "1- Add Book\n2- Delete Book\n3- Modify Book\n4- Rest Program\n5- Log out\n";
				cin >> user_input;
				if (user_input == "1") {
					Add_book();
				}
				else if (user_input == "2") {
					Delete_book();
				}
				else if (user_input == "3") {
					Modify_Book();
				}
				else if (user_input == "4") {
					admin_rest_program();
				}
				else if (user_input == "5") {
					Log_out(w2);
				}
				else {
					cout << "Wrong Input!\n";
				}
			}

		}
		else if (user_input == "3")
		{
			w1 = false;
			
		}
		else {
			cout << "Wrong input!\n";
		}
	}
	Save_All(); // Saving Arrays in files 
	return 0;
}

