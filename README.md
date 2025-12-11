# My First Project
正式名为：LibrarySystem
项目简介：本项目为图书管理系统（链表实现），可通过简单指令操作对图书系统进行管理
功能：可创建图书链表，并对其中的图书进行增删查改
特色：可以文件存储书籍和从文件中读入图书，实现数据持久化。可选择关键字进行书籍查询/搜索
运行环境：
    编程语言：C++
    IDE：Visual Studio Code
    编译器：MinGW
    运行环境：Windows 10/11
    测试环境：Windows 11
结构：
LibrarySystem/
├── CMakeLists.txt
├── include/
│   ├── Book.h
│   ├── BookList.h
│   └── globals.h
├── src/
│   ├── BookList.cpp
│   ├── menu.cpp
│   └── main.cpp
操作：打开终端，进入项目目录，输入cmake .，输入make，输入./LibrarySystem
    或直接运行LibrarySystem.exe，在命令窗口中输入菜单指令
菜单指令：
    1. 添加图书
    2. 显示所有图书
    3. 查询图书
    4. 修改图书信息
    5. 删除图书
    6. 从内存中清空所有图书
    7.从文件中删除所有图书
    0. 退出系统
    其中，若选择3进行查询，可进入二级菜单，选择关键字进行查询
    菜单指令：
    1. 按书名查询
    2. 按作者查询
    3. 按ISBN查询
    4. 按库内序号查询

