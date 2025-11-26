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
    do{
        cin>>choice;
        menu(choice);

    }while(choice);
    
    return 0;
}
