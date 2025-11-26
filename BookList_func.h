#ifndef BOOKLIST_FUNC_H
#define BOOKLIST_FUNC_H

#include "Book.h"

using std::string;



void addbook(Book &book);//添加书籍
void deletebook(Book &book);//删除书籍
void updatebook(Book &book);//修改书籍
void display();//显示所有书籍
void searchbook(Book &book);//查找书籍
int getSize();
void clear();//清空所有书籍

#endif