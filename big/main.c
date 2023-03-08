#include "database.h"
int main()
{
    system("cls");
    char number;
    char a[6],b[6]="admin",c[7],d[7]="123456";
    printf("***********************\n");
    printf("*   图书销售管理系统  *\n");
    printf("*      1.登陆系统     *\n");
    printf("*      2.退出         *\n");
    printf("***********************\n");
    printf("请选择，输入数字（1-2）：");
    scanf("%c",&number);
    if(number=='1')
    {
        for(int i=1;i<=3;i++)
        {
            printf("请输入账号：");
            fflush(stdin);
            gets(a);
            if(strcmp(a,b)==0)
            {
                printf("请输入密码：");
                gets(c);
                if(strcmp(c,d)==0)
             {
                printf("登录成功！\n");
                system("pause");
                PrimaryMenu();
             }
            else printf("账号密码错误！你还有%d次机会。请重新输入账号\n",3-i);
            }
        }
    }
    else if(number=='2') exit(0);
    else
    {
        printf("格式错误，请重新输入\n");
        fflush(stdin);
        system("pause");
        main();
    }
}
