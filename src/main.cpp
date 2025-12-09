#include "BookList_func.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main(){
    int choice=1;
    BookList bl;
    bl.setHead(NULL);
    do{
        cin>>choice;
        menu(choice, bl.getHead());

    }while(choice);
    
    return 0;
}
