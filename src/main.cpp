#include "BookList_func.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main(){
    int choice=1;
    do{
        cin>>choice;
        menu(choice);

    }while(choice);
    
    return 0;
}
