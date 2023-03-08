#include "database.h"
void ShowMembers()
{
    system("cls");
    printf("图书销售管理系统 > 会员信息管理 > 显示会员信息\n");
    int i;
    INFORMATION inf[N];
    printf("会员号      姓名     积分\n");
    FILE*fp;
    if((fp=fopen("MembersInformation.txt","r"))==NULL)
    {
        printf("Failure to open MembersInformation.txt!\n");
        exit(0);
    }
    for(i=0;i<ReadfromFile1(inf);i++)
    {
        printf("%5d%10s%8d\n",inf[i].number,
                            inf[i].name,
                            inf[i].integral);
    }
    fflush(fp);
    fclose(fp);
    system("pause");
    Logout(21);
}

int ReadfromFile1(INFORMATION inf[])
{
    FILE*fp;
    int i;
    if((fp=fopen("MembersInformation.txt","r"))==NULL)
    {
        printf("Failure to open MembersInformation.txt!\n");
        exit(0);
    }
    for(i=0;!feof(fp);i++)
    {
        fread(&inf[i],sizeof(INFORMATION),1,fp);
    }
    fflush(fp);
    fclose(fp);
    return i-1;
}
