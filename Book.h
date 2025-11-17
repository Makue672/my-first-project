#ifndef BOOK_H
#define BOOK_H  


#include <string>
using std::string;
class Book{
    private:
        string title;
        string author;
        string ISBN;
        int pages; //类的属性，书籍的标题，作者，ISBN号，私密封装
    public:
        Book(string atitle = "", string aauthor = "", string aISBN = "");//构造函数

        string getTitle() const;
        string getAuthor() const;
        string getISBN() const;
        int getPages() const;//访问器方法

        void setTitle(string atitle);
        void setAuthor(string aauthor);
        void setISBN(string aISBN);
        void setPages(int aPages);//修改器方法

};

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

        void addbook(Book &book);//添加书籍
        void deletebook(Book &book);//删除书籍
        void updatebook(Book &book);//修改书籍
        void display();//显示所有书籍
        Book *searchbook(Book &book);//查找书籍
        int getSize();
        void clear();//清空
};

#endif