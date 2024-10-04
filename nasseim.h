#pragma once
#include "stdafx.h"

void Resotring_Nums() {
    ifstream file;
    file.open("Nums.txt");
    file >> Students_num >> Books_num;
}

void Save_Nums() {
    ofstream file;
    file.open("Nums.txt");
    file << Students_num << ' ' << Books_num;
}

void Restoring_IDs_from_file() {
    ifstream file("IDs.txt");
    for(int i = 0; i < Students_num; i++)
        file >> Students[i].ID;
    file.close();
}

void Save_IDs() {
    ofstream file;
    file.open("IDs.txt");
    for (int i = 0; i < Students_num; i++)
    {
        file << Students[i].ID << ' ';
    }
    file.close();
}

void Restoring_Emails_from_file() {
    ifstream file("Emails.txt");
    for(int i = 0; i < Students_num; i++)
        file >> Students[i].email;
    file.close();
}

void Save_Emails() {
    ofstream file;
    file.open("Emails.txt");
    for (int i = 0; i < Students_num; i++)
    {
        file << Students[i].email << ' ';
    }
    file.close();
}

void Restoring_passwords_from_file() {
    ifstream file("Passwords.txt");
    int passwords_num = 0;
    for(int i = 0; i < Students_num; i++)
        getline(file, Students[i].password);
    file.close();
}
void Save_passwords() {
    ofstream file;
    file.open("passwords.txt", ios::out);
    for (int i = 0; i < Students_num; i++)
    {
        file << Students[i].password << endl;
    }
    file.close();
}

void Restoring_First_names_from_file() {
    ifstream file("First_names.txt");
    for (int i = 0; i < Students_num; i++)
        file >> Students[i].first_name;
    file.close();
}

void Save_First_names() {
    ofstream file;
    file.open("First_names.txt");
    for (int i = 0; i < Students_num; i++)
    {
        file << Students[i].first_name << ' ';
    }
    file.close();
}

void Restoring_Last_names_from_file() {
    ifstream file("Last_names.txt");
    int Last_names_num = 0;
    for (int i = 0; i < Students_num; i++)
        file >> Students[i].last_name;
    file.close();
}

void Save_Last_names() {
    ofstream file;
    file.open("Last_names.txt");
    for (int i = 0; i < Students_num; i++)
    {
        file << Students[i].last_name << ' ';
    }
    file.close();
}

void Restoring_borrowed_books_nums_from_file() {
    ifstream file;
    file.open("borrowed_books_num.txt");
    for (int i = 0; i < Students_num; i++) {
        file >> Students[i].borrowed_books_num;
    }
}

void Save_borrowed_books_nums() {
    ofstream file;
    file.open("borrowed_books_num.txt");
    for (int i = 0; i < Students_num; i++) {
        file << Students[i].borrowed_books_num << ' ';
    }
}

void Restoring_borrowed_books_from_file() {
    ifstream file("borrowed_books.txt");
    for (int i = 0; i < Students_num; i++) {
        for (int j = 0; j < Students[i].borrowed_books_num; j++) {
            file >> Students[i].borrowed_books[j];
        }
    }
    file.close();
}

void Save_borrowed_books() {
    ofstream file;
    file.open("borrowed_books.txt");
    for (int i = 0; i < Students_num; i++)
    {
        for (int j = 0; j < Students[i].borrowed_books_num; j++)
            file << Students[i].borrowed_books[j] << ' ';
        file << endl;
    }
    file.close();
}

//~ Books DataBase

void Restoring_Codes_from_file() {
    ifstream file("Codes.txt");
    for (int i = 0; i < Books_num; i++)
        file >> Books[i].code;
    file.close();
}

void Save_Codes() {
    ofstream file;
    file.open("Codes.txt");
    for (int i = 0; i <  Books_num; i++)
    {
        file << Books[i].code << ' ';
    }
    file.close();
}

void Restoring_Names_from_file() {
    ifstream file("Names.txt");
    for (int i = 0; i < Books_num; i++)
        getline(file, Books[i].name);
    file.close();
}

void Save_Names() {
    ofstream file;
    file.open("Names.txt");
    for (int i = 0; i < Books_num; i++)
    {
        file << Books[i].name << endl;
    }
    file.close();
}

void Restoring_authors_from_file() {
    ifstream file("authors.txt");
    for (int i = 0; i < Books_num; i++)
        getline(file, Books[i].author);
    file.close();
}

void Save_authors() {
    ofstream file;
    file.open("authors.txt");
    for (int i = 0; i < Books_num; i++)
    {
        file << Books[i].author << endl;
    }
    file.close();
}

void Restoring_categorys_from_file() {
    ifstream file("categorys.txt");
    for (int i = 0; i < Books_num; i++)
        file >> Books[i].category;
    file.close();
}

void Save_categorys() {
    ofstream file;
    file.open("categorys.txt");
    for (int i = 0; i < Books_num; i++)
    {
        file << Books[i].category << endl;
    }
    file.close();
}

void Restoring_editions_from_file() {
    ifstream file("editions.txt");
    for (int i = 0; i < Books_num; i++)
        file >> Books[i].edition;
    file.close();
}

void Save_editions() {
    ofstream file;
    file.open("editions.txt");
    for (int i = 0; i < Books_num; i++)
    {
        file << Books[i].edition << endl;
    }
    file.close();
}

void Restoring_Available_to_borrow_from_file() {
    ifstream file("Available_to_borrow.txt");
    for (int i = 0; i < Books_num; i++)
        file >> Books[i].available_to_borrow;
    file.close();
}

void Save_Available_to_borrow() {
    ofstream file;
    file.open("Available_to_borrow.txt");
    for (int i = 0; i < Books_num; i++)
    {
        file << Books[i].available_to_borrow << endl;
    }
    file.close();
}

void Restore_All() {
    Resotring_Nums();
    Restoring_IDs_from_file();
    Restoring_Emails_from_file();
    Restoring_passwords_from_file();
    Restoring_First_names_from_file();
    Restoring_Last_names_from_file();
    Restoring_borrowed_books_nums_from_file();
    Restoring_borrowed_books_from_file();
    Restoring_Codes_from_file();
    Restoring_Names_from_file();
    Restoring_authors_from_file();
    Restoring_categorys_from_file();
    Restoring_editions_from_file();
    Restoring_Available_to_borrow_from_file();
}

void Save_All() {
    Save_Nums();
    Save_IDs();
    Save_Emails();
    Save_passwords();
    Save_First_names();
    Save_Last_names();
    Save_borrowed_books_nums();
    Save_borrowed_books();
    Save_Codes();
    Save_Names();
    Save_authors();
    Save_categorys();
    Save_editions();
    Save_Available_to_borrow();
}

