#pragma once
#include "stdafx.h"

bool Email_isFound(string x) {
	for (int i = 0; i < 3; i++) {
		if (x == Students[i].email)
			return true;
	}
	return false;
}

void logIn() {
	string email, password;
	cout << "Enter your Email: ";
	cin >> email;
	cout << "Enter your Password: ";
	bool vaild = false;
	getPassword('*', password);
	for (int i = 0; i < Students_num; i++)
	{
		if (email == Students[i].email && password == Students[i].password) {
			vaild = true;
			user_index = i;
			i = Students_num;
			cout << "\nWelcome, " << Students[user_index].first_name << ' ' << Students[user_index].last_name << endl;
		}
		else if (email == Students[i].email) {
			vaild = true;
			i = Students_num;
			cout << "\nWrong Password!\nPlease Log in again\n";
			logIn();
		}
	}
	if (!vaild) {
		cout << "\nWrong Email\nPlease Log in again\n";
		logIn();
	}
}

void SignUp() {
	bool vaild = true;
	cout << "Enter your ID: ";
	get_int(Students[Students_num].ID);
	cout << "Enter your first name: ";
	cin >> Students[Students_num].first_name;
	cout << "Enter your last name: ";
	cin >> Students[Students_num].last_name;
	cout << "Enter your Email:";
	cin >> Students[Students_num].email;
	while (vaild)
	{
		vaild = false;
		for (int i = 0; i < Students_num; i++) {
			if (Students[Students_num].email == Students[i].email) {
				vaild = true;
				i = Students_num;
				cout << "\nThis Email is already registered!\nPlease Enter new Email: ";
				cin >> Students[Students_num].email;
			}
		}
	}
	cout << "Enter your password: ";
	getPassword('*', Students[Students_num].password);
	cout << "\nYou have Signed Up successfully!\n";
	Students_num++;
}

void logInAsStudent(bool &v) {
	bool vaild = false;
	while (!vaild) {
		cout << "1- Log In\n";
		cout << "2- Sign Up\n";
		cout << "0- back\n";
		cin >> user_input;
		if (user_input == "1") {
			logIn();
			v = true;
			vaild = true;
		}
		else if (user_input == "2") {
			SignUp();
			cout << "Now, You can Log In\n";
			logIn();
			v = true;
			vaild = true;
		}
		else if (user_input == "0") {
			v = false;
			vaild = true;
		}
		else {
			cout << "Wrong Input!!\n";
		}
	}
}
void logInAsAdmin() {
	bool vaild = true;
	while (vaild) {
		string username, password;
		cout << "Enter Username: ";
		cin >> username;
		cout << "Enter Password: ";
		getPassword('*', password);
		if (username == admin_name && password == admin_password) {
			cout << "\nWelcome, Admin\n";
			vaild = false;
		}
		else
		{
			cout << "\nWrong Username or Password\n";
		}
	}
}

void admin_rest_program() {
	for (size_t i = 0; i < Books_num; i++)
	{
		Books[i] = {};
	}
	for (size_t i = 0; i < Students_num; i++)
	{
		Students[i] = {};
	}
	Students_num = 0;
	Books_num = 0;
}

void get_int(int& x) {
	int sub = -1;
	string su;
	bool vaild = true;
	while (vaild) {
		cin >> su;
		int i = 0;
		for (i = 0; i < su.length(); i++)
		{
			if (!(su[i] >= '0' && su[i] <= '9')) {
				vaild = true;
				i = su.length();
				cout << "Invaild value, Please Enter an postive Integer!" << endl;
			}
			else {
				vaild = false;
				x = stoi(su);
			}
		}

	}
}

string getPassword(char x, string& user_input) {
	user_input.erase();
	int i = 0;
	int ch = _getch();
	while (ch != 13) {

		if (ch == 8 && i != 0)
		{
			printf("\b \b");
			user_input.erase(--i);
		}
		else if (ch == 8 && i == 0) {
		}
		else {
			cout << x;
 			user_input.push_back(ch);
			i++;
		}
		ch = _getch();
	}
	return user_input;
}

