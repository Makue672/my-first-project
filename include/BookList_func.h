#ifndef BOOKLIST_FUNC_H
#define BOOKLIST_FUNC_H

#include "Book.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::strcpy;
using std::strcmp;
using std::getline;
using std::ignore;
using std::string;



void addbook(Book &book);//添加书籍
void deletebook(Book &book);//删除书籍
void updatebook(Book &book);//修改书籍
void display();//显示所有书籍
void searchbook(Book &book);//查找书籍
int getSize();
void clear();//清空所有书籍
void menu(int choice);//菜单函数

#endif