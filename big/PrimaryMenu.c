#include "database.h"
void PrimaryMenu()
{
    int n;
    system("cls");
    printf("******************************\n");
    printf("*      ͼ�����۹���ϵͳ      *\n");
    printf("*         1.��Ա����         *\n");
    printf("*         2.�鼮����         *\n");
    printf("*         3.�������         *\n");
    printf("*         4.ע��             *\n");
    printf("******************************\n");
    printf("��ѡ���������֣�1-4����");
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
        printf("����ȷ��������!\n");
        system("pause");
        PrimaryMenu();
    }
}
