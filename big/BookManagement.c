#include "database.h"
void BookManagement()
{
    system("cls");
    printf("ͼ�����۹���ϵͳ >�鼮����\n");
    int number;
    printf("****************\n");
    printf("* 1.�鿴��Ŀ   *\n");
    printf("* 2.����鼮   *\n");
    printf("* 3.ɾ���鼮   *\n");
    printf("* 4.�������˵� *\n");
    printf("****************\n");
    printf("��ѡ���������֣�1-4����");
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
        printf("����ȷ��������!\n");
        system("pause");
        BookManagement();
    }
}
