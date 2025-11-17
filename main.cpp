#include <iostream>
#include <string>
#include "Book.h"
#include "BookList_func.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main(){
    Book book;
    while(true){
        cout << "1. Add book" << endl;
        cout << "2. Delete book" << endl;
        cout << "3. Update book" << endl;
        cout << "4. Search book" << endl;
        cout << "5. Display all books" << endl;
        cout << "6. Clear all books" << endl;
        cout << "7. Quit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch(choice){
            case 1: addbook(book);
                    continue;
            case 2: deletebook(book);
                    continue;
            case 3: updatebook(book);
                    continue;
            case 4: searchbook(book);
                    continue;
            case 5: display();
                    continue;
            case 6: clear();
                    continue;
            case 7: return 0;
            default: cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
