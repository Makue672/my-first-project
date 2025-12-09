#include "BookList.h"
#include "globals.h"


extern void runMenu(BookList &list);

int main(){
    BookList bl; // 创建链表对象
    
    while(true){
        runMenu(bl); 
    }
    
    return 0;
}