#include "Book.h"
#include "BookList.h"
#include "globals.h"


extern void menu(BookList &bl);

int main(){
    system("chcp 65001");// 设置控制台为UTF-8编码以支持中文显示
    BookList bl; // 创建链表对象
    bl.loadFromFile(); // 从文件加载数据
    
    while(true){
        menu(bl); 
        system("pause");
    }
    
    return 0;
}