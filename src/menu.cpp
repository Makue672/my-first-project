#include "BookList_func.h"

void menu(int choice,BookNode* head){
    cout<<"1. Add a book"<<endl;
    cout<<"2. Display all books"<<endl;
    cout<<"3. Search a book"<<endl;
    cout<<"4. Update a book"<<endl;
    cout<<"5. Delete a book"<<endl;
    cout<<"6. Clear all books"<<endl;
    cout<<"0. Exit"<<endl;
    switch(choice){
        case 1:
            createlist(head);
            break;
        case 2:
            addbook(head);
            break;
        case 3:
            display();
            break;
        case 4:
            searchbook(head);
            break;
        case 5:
            updatebook(head);
            break;
        case 6:
            deletebook(head);
            break;
        case 7:
            clear(head);
            break;
        case 0:
            exit(0);
            break;
    }
}
