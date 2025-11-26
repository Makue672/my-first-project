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
    int choice=1;
    while(choice){
        cout << "1. Add book" << endl;
        cout << "2. Delete book" << endl;
        cout << "3. Update book" << endl;
        cout << "4. Search book" << endl;
        cout << "5. Display all books" << endl;
        cout << "6. Clear all books" << endl;
        cout << "0. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: addbook(book);
                    break;
            case 2: deletebook(book);
                    break;
            case 3: updatebook(book);
                    break;
            case 4: searchbook(book);
                    break;
            case 5: display();
                    break;
            case 6: clear();
                    break;
            case 0: return 0;
            default: cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
