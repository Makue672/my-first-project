#ifndef BOOKLIST_FUNC_H
#define BOOKLIST_FUNC_H

#include "Book.h"
#include "BookList.h"
#include "globals.h"




void add_wholebook(Book &book);//添加完整书籍信息
void deletebook(Book &book);//删除书籍
void updatebook(Book &book);//修改书籍
void display();//显示所有书籍
void searchbook(Book &book);//查找书籍
int getSize();
void clear();//清空所有书籍
void menu(int choice);//菜单函数
void operation(int choice);//操作函数

#endif