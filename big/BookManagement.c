#include "database.h"
void BookManagement()
{
    system("cls");
    printf("图书销售管理系统 >书籍管理\n");
    int number;
    printf("****************\n");
    printf("* 1.查看书目   *\n");
    printf("* 2.添加书籍   *\n");
    printf("* 3.删除书籍   *\n");
    printf("* 4.返回主菜单 *\n");
    printf("****************\n");
    printf("请选择，输入数字（1-4）：");
    scanf("%d",&number);
    if(number==1)
    {
        system("pause");
        Bibliographica();
    }
    else if(number==2)
    {
        system("pause");
        AddBook();
    }
    else if(number==3)
    {
        system("pause");
        DeleteBook();
    }
    else if(number==4)
    {
        system("pause");
        Logout(11);
    }
    else
    {
        printf("请正确输入数字!\n");
        system("pause");
        BookManagement();
    }
}
