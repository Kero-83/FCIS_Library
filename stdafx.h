#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int Students_num, Books_num;
string admin_name = "admin";
string admin_password = "admin";

string user_input;
int user_index = -1;
int book_selected = -1;

struct student {
	int ID;
	string email;
	string password;
	string first_name;
	string last_name;
	int borrowed_books_num = 0;
	string borrowed_books[10];
}Students[1000] = {};

struct book {
	int code;
	string name;
	string author;
	string category;
	int edition;
	bool available_to_borrow = true;
}Books[1000] = {};


// Abdo
void Student_edit_info(student&);
void Student_view_books();
// Ahmed
void Add_book();
void Delete_book();
// Kero
void admin_rest_program();
bool Email_isFound(string);
void logIn();
void logInAsAdmin();
void logInAsStudent(bool&);
void SignUp();
void get_int(int&);
string getPassword(char, string&);
// Sarah
void Log_out(bool&);
void Modify_order();
// Tarahony
void Modify_Book();
void Select_book(int&);
// nasseim (DataBase)
void Resotring_Nums();
void Save_Nums();
void Restoring_IDs_from_file();
void Save_IDs();
void Restoring_Emails_from_file();
void Save_Emails();
void Restoring_passwords_from_file();
void Save_passwords();
void Restoring_First_names_from_file();
void Save_First_names();
void Restoring_Last_names_from_file();
void Save_Last_names();
void Restoring_borrowed_books_nums_from_file();
void Save_borrowed_books_nums();
void Restoring_borrowed_books_from_file();
void Save_borrowed_books();
void Restoring_Codes_from_file();
void Save_Codes();
void Restoring_Names_from_file();
void Save_Names();
void Restoring_authors_from_file();
void Save_authors();
void Restoring_categorys_from_file();
void Save_categorys();
void Restoring_editions_from_file();
void Save_editions();
void Restoring_Available_to_borrow_from_file();
void Save_Available_to_borrow();
void Restore_All();
void Save_All();
  