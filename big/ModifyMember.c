#include "database.h"
void modify(INFORMATION inf[],int k);
void ModifyMember()
{
    system("cls");
    printf("图书销售管理系统 > 会员信息管理 >修改会员信息\n");
    int i,k,n;
    INFORMATION inf[N];
    printf("请输入要修改的会员号：");
    scanf("%d",&k);
    n=ReadfromFile1(inf);
    modify(inf,k);
    FILE*fp;
    if((fp=fopen("MembersInformation.txt","w"))==NULL)
    {
        printf("Failure to open MembersInformation.txt!\n");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        fwrite(&inf[i],sizeof(INFORMATION),1,fp);
    }
    fflush(fp);
    fclose(fp);
    printf("修改成功！\n");
    system("pause");
    Logout(21);
}

void modify(INFORMATION inf[],int k)
{
    char a[10];
    inf[k-1].number=k;
    printf("请输入要修改的会员名：");
    scanf("%s",a);
    strcpy(inf[k-1].name,a);
    printf("请输入要修改的会员积分：");
    scanf("%d",&inf[k-1].integral);
}
