#include "database.h"
void Input(INFORMATION inf[],int n);
void WritetoFile(INFORMATION inf[],int n);
void AddMember()
{
    system("cls");
    printf("图书销售管理系统 > 会员信息管理 > 新增会员信息\n");
    INFORMATION inf[N];
    int n=ReadfromFile1(inf);
    inf[n].number=n+1;
    Input(inf,n);
    WritetoFile(inf,n);
}

void Input(INFORMATION inf[],int n)
{
    printf("请输入新会员姓名：");
    scanf("%s",inf[n].name);
    printf("请输入新会员积分：");
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
    printf("添加成功！\n");
    system("pause");
    Logout(21);
}
