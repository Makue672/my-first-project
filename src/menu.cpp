#include "BookList_func.h"

void menu(int choice,Book &book){
    cout<<"1. Add a book"<<endl;
    cout<<"2. Display all books"<<endl;
    cout<<"3. Search a book"<<endl;
    cout<<"4. Update a book"<<endl;
    cout<<"5. Delete a book"<<endl;
    cout<<"6. Clear all books"<<endl;
    cout<<"0. Exit"<<endl;
    switch(choice){
        case 1:
            add_wholebook(book);
            break;
        case 2:
            display();
            break;
        case 3:
            searchbook(book);
            break;
        case 4:
            updatebook(book);
            break;
        case 5:
            deletebook(book);
            break;
        case 6:
            clear();
            break;
        case 0:
            exit(0);
            break;
    }
}
