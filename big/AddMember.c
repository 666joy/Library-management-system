#include "database.h"
void Input(INFORMATION inf[],int n);
void WritetoFile(INFORMATION inf[],int n);
void AddMember()
{
    system("cls");
    printf("ͼ�����۹���ϵͳ > ��Ա��Ϣ���� > ������Ա��Ϣ\n");
    INFORMATION inf[N];
    int n=ReadfromFile1(inf);
    inf[n].number=n+1;
    Input(inf,n);
    WritetoFile(inf,n);
}

void Input(INFORMATION inf[],int n)
{
    printf("�������»�Ա������");
    scanf("%s",inf[n].name);
    printf("�������»�Ա���֣�");
    scanf("%d",&inf[n].integral);
}

void WritetoFile(INFORMATION inf[],int n)
{
    FILE*fp;
    if((fp=fopen("MembersInformation.txt","a"))==NULL)
    {
        printf("Failure to open MembersInformation.txt!\n");
        exit(0);
    }
    fwrite(&inf[n],sizeof(INFORMATION),1,fp);
    fflush(fp);
    fclose(fp);
    printf("��ӳɹ���\n");
    system("pause");
    Logout(21);
}
