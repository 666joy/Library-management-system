#include "database.h"
void PrimaryMenu()
{
    int n;
    system("cls");
    printf("******************************\n");
    printf("*      图书销售管理系统      *\n");
    printf("*         1.会员管理         *\n");
    printf("*         2.书籍管理         *\n");
    printf("*         3.购物结算         *\n");
    printf("*         4.注销             *\n");
    printf("******************************\n");
    printf("请选择，输入数字（1-4）：");
    scanf("%d",&n);
    if(n==1)
    {
        system("pause");
        MemberManagement();
    }
    else if(n==2)
    {
        system("pause");
        BookManagement();
    }
    else if(n==3)
    {
        system("pause");
        ShoppingSettlement();
    }
    else if(n==4)
    {
        system("pause");
        Logout(1);
    }
    else
    {
        printf("请正确输入数字!\n");
        system("pause");
        PrimaryMenu();
    }
}
