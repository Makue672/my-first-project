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
            getline(cin, title);
        }
        void setAuthor(){
            getline(cin, author);
        }
        void setISBN(){
            getline(cin, ISBN);
        }
        void setPages(){
            cin >> pages;
        }
        void setNumber(){
            getline(cin, number);
        }
        //修改器方法
        void InputaBook(){
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Input book information:" << endl;
            cout << "Enter book title: ";
            setTitle();
            cout << "Enter book author: ";
            setAuthor();
            cout << "Enter book ISBN: ";
            setISBN();
            cout << "Enter book number: ";
            setNumber();
            cout << "Enter book pages: ";
            setPages();
            
        }//输入书籍信息
        void OutputaBook() const{
            cout<<endl;
            cout << "Book Information:" << endl;
            cout << "| Title: " << getTitle() << endl;
            cout << "| Author: " << getAuthor() << endl;
            cout << "| ISBN: " << getISBN() << endl;
            cout << "| Number: " << getNumber() << endl;
            cout << "| Pages: " << getPages() << endl;
        }//输出书籍信息
        bool readFromStream(ifstream& in) {//从文件流中读取书籍信息
            if (!getline(in, title)) return false; // 如果读取title失败，返回false
            getline(in, author);
            in >> ISBN;
            in >> number;
            in >> pages;

            in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//忽略换行符
            return true;
        }

        void writeToStream(ofstream& out) const {
            out << title << endl;
            out << author << endl;
            out << ISBN << endl;
            out << number << endl;
            out << pages << endl;
        }//将书籍信息写入文件流
};



#endif