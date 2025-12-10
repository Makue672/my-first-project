#ifndef BOOK_H
#define BOOK_H  

#include "globals.h"

class Book{
    private://类的属性，书籍的标题，作者，ISBN号，私密封装
        string title;
        string author;
        string ISBN;
        string number;
        int pages; 
    public://类的公有方法
        Book() : pages(0) {}
        
        Book(string atitle, string aauthor, string aISBN, string anumber, int aPages)
            : title(atitle), author(aauthor), ISBN(aISBN), number(anumber), pages(aPages) {}

        string getTitle() const{
            return title;
        }
        string getAuthor() const{
            return author;
        }
        string getISBN() const{
            return ISBN;
        }
        int getPages() const{
            return pages;
        }
        string getNumber() const{
            return number;
        }
        //访问器方法

        void setTitle(){
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, title);
        }
        void setAuthor(){
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, author);
        }
        void setISBN(){
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, ISBN);
        }
        void setPages(){
            cin >> pages;
        }
        void setNumber(){
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, number);
        }
        //修改器方法
        void InputaBook(){
            cout << "Input book information:" << endl;
            cout << "Enter book title: ";
            setTitle();
            cout << "Enter book author: ";
            setAuthor();
            cout << "Enter book ISBN: ";
            setISBN();
            cout << "Enter book pages: ";
            setPages();
            cout << "Enter book number: ";
            setNumber();
        }//输入书籍信息
        void OutputaBook() const{
            cout << "Book Information:" << endl;
            cout << "Title: " << getTitle() << endl;
            cout << "Author: " << getAuthor() << endl;
            cout << "ISBN: " << getISBN() << endl;
            cout << "Number: " << getNumber() << endl;
            cout << "Pages: " << getPages() << endl;
        }//输出书籍信息
};



#endif