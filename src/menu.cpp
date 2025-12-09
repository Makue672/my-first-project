#include "BookList_func.h"

void menu(BookList &head){
    cout<<"1. Add a book"<<endl;
    cout<<"2. Display all books"<<endl;
    cout<<"3. Search a book"<<endl;
    cout<<"4. Update a book"<<endl;
    cout<<"5. Delete a book"<<endl;
    cout<<"6. Clear all books"<<endl;
    cout<<"0. Exit"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            addbook(head);
            break;
        case 2:
            display();
            break;
        case 3:
            searchbook(head);
            break;
        case 4:
            updatebook(head);
            break;
        case 5:
            deletebook(head);
            break;
        case 6:
            clear(head);
            break;
        case 0:
            exit(0);
            break;
    }
}
