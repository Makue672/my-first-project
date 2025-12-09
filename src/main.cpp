#include "Book.h"
#include "BookList.h"
#include "globals.h"


extern void Menu(BookList &bl);

int main(){
    BookList bl; // 创建链表对象
    
    while(true){
        Menu(bl); 
    }
    
    return 0;
}