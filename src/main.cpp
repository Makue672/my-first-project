#include "Book.h"
#include "BookList.h"
#include "globals.h"


extern void menu(BookList &bl);

int main(){
    BookList bl; // 创建链表对象
    
    while(true){
        menu(bl); 
        system("pause");
    }
    
    return 0;
}