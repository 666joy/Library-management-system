#include "database.h"
void MemberManagement()
{
    system("cls");
    printf("ͼ�����۹���ϵͳ>��Ա����\n");
    int number;
    printf("**************************\n");
    printf("*  1.��ʾ���л�Ա        *\n");
    printf("*  2.��ӻ�Ա��Ϣ        *\n");
    printf("*  3.�޸Ļ�Ա��Ϣ        *\n");
    printf("*  4.�������˵�          *\n");
    printf("**************************\n");
    printf("��ѡ���������֣�1-4����");
    scanf("%d",&number);
    if(number==1) ShowMembers();
    else if(number==2) AddMember();
    else if(number==3) ModifyMember();
    else if(number==4) Logout(11);
    else
    {
        printf("����ȷ��������!\n");
        MemberManagement();
    }
}
