#include "database.h"
int main()
{
    system("cls");
    char number;
    char a[6],b[6]="admin",c[7],d[7]="123456";
    printf("***********************\n");
    printf("*   ͼ�����۹���ϵͳ  *\n");
    printf("*      1.��½ϵͳ     *\n");
    printf("*      2.�˳�         *\n");
    printf("***********************\n");
    printf("��ѡ���������֣�1-2����");
    scanf("%c",&number);
    if(number=='1')
    {
        for(int i=1;i<=3;i++)
        {
            printf("�������˺ţ�");
            fflush(stdin);
            gets(a);
            if(strcmp(a,b)==0)
            {
                printf("���������룺");
                gets(c);
                if(strcmp(c,d)==0)
             {
                printf("��¼�ɹ���\n");
                system("pause");
                PrimaryMenu();
             }
            else printf("�˺���������㻹��%d�λ��ᡣ�����������˺�\n",3-i);
            }
        }
    }
    else if(number=='2') exit(0);
    else
    {
        printf("��ʽ��������������\n");
        fflush(stdin);
        system("pause");
        main();
    }
}
