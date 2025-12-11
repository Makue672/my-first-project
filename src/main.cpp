#include "Book.h"
#include "BookList.h"
#include "globals.h"


extern void menu(BookList &bl);

int main(){
    BookList bl; // 创建链表对象
    bl.loadFromFile(); // 从文件加载数据
    
    while(true){
        menu(bl); 
        system("pause");
    }
    
    return 0;
}