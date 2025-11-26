#ifndef BOOK_H
#define BOOK_H  
#include "BookList_func.h"

#include <limits>
#include <string>
#include <cstdlib>
using std::string;
using std::cin;
class Book{
    private:
        string title;
        string author;
        string ISBN;
        int number;
        int pages; //类的属性，书籍的标题，作者，ISBN号，私密封装
    public:
        Book(string atitle = "", string aauthor = "", string aISBN = "",int anumber = 0, int aPages = 0);//构造函数
        ~Book();//析构函数

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
        int getNumber() const{
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
            cin >> ISBN;
        }
        void setPages(){
            cin >> pages;
        }
        void setNumber(){
            cin >> number;
        }
        //修改器方法

};



#endif