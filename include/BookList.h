#ifndef BOOKLIST_H
#define BOOKLIST_H

#include "Book.h"
#include "globals.h"



struct BookNode {
    Book data;
    BookNode *next;

    BookNode(Book aBook, BookNode *aNext = NULL) {
        data = aBook;
        next = aNext;
    }
};//链表定义



class BookList {//链表类，实现书库管理功能
    private:
        BookNode *head;
        int size;
    public:
        BookList();
        ~BookList();

        BookNode *getHead(){
            return head;
        }
        
        void setHead(BookNode *aHead){
            head = aHead; 
        }
        
        BookNode addbook(BookNode *ahead);
        //添加书籍
        BookNode deletebook(Book &book);//删除书籍
        void updatebook(Book &book);//修改书籍
        void display();//显示所有书籍
        BookNode *searchbook(Book &book);//查找书籍
        int getSize();
        void clear();//清空
};


#endif