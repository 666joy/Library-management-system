#include "database.h"
void MemberManagement()
{
    system("cls");
    printf("图书销售管理系统>会员管理\n");
    int number;
    printf("**************************\n");
    printf("*  1.显示所有会员        *\n");
    printf("*  2.添加会员信息        *\n");
    printf("*  3.修改会员信息        *\n");
    printf("*  4.返回主菜单          *\n");
    printf("**************************\n");
    printf("请选择，输入数字（1-4）：");
    scanf("%d",&number);
    if(number==1) ShowMembers();
    else if(number==2) AddMember();
    else if(number==3) ModifyMember();
    else if(number==4) Logout(11);
    else
    {
        printf("请正确输入数字!\n");
        MemberManagement();
    }
}
