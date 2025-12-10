#include "Book.h"
#include "BookList.h"
#include "globals.h"

void menu(BookList &bl){
    Book book;
    string query;
    int choiceofsearch;
    cout<<endl;
    cout<<"Menu"<<endl;
    cout<<"1. Add a book"<<endl;
    cout<<"2. Display all books"<<endl;
    cout<<"3. Search a book"<<endl;
    cout<<"4. Update a book"<<endl;
    cout<<"5. Delete a book"<<endl;
    cout<<"6. Clear all books"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<endl;
    cout<<"Enter your choice: "<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<endl;
            bl.addBook(book);
            break;
        case 2:
            cout<<endl;
            bl.displayAll();
            break;
        case 3:
            cout<<endl;
            cout<<"Enter query: "<<endl;
            
            cout<<"Enter type of search: "<<endl;
            cout<<"1. Search by ISBN"<<endl;
            cout<<"2. Search by title"<<endl;
            cout<<"3. Search by author"<<endl;
            cout<<"4. Search by number"<<endl;
            cout<<endl;
            cout<<"Your choice: "<<endl;
            cin>>choiceofsearch;
            cout<<"Enter query: "<<endl;
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, query);
            cout<<"Searching..."<<endl;
            bl.searchBook(query, choiceofsearch);
            break;
        case 4:
            cout<<endl;
            cout<<"Enter ISBN of book to update: "<<endl;
            cin>>query;
            bl.updateBook(query);
            break;
        case 5:
            cout<<endl;
            cin>>query;
            bl.deleteBook(query);
            break;
        case 6:
            cout<<endl;
            bl.clear();
            break;
        case 0:
            exit(0);
            break;
    }
}
