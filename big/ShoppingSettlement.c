#include "database.h"
void reappearbooks(BOOK mes[]);
int calculate(BOOK mes[],int n2,int amount);
void rewriteintegral(int n1,int summoney);
void ShoppingSettlement()
{
    system("cls");
    printf("图书销售管理系统 >购物结算 \n");
    int n1,n2,amount,summoney,m=1;
    char answer;
    BOOK mes[N];
    reappearbooks(mes);
    printf("请输入会员号：");
    scanf("%d",&n1);
    printf("请输入你想要购买的书籍编号：");
    scanf("%d",&n2);
    printf("请输入你要购买的数量：");
    scanf("%d",&amount);
    summoney=calculate(mes,n2,amount);
    printf("是否继续?(y/n)");
    fflush(stdin);
    scanf("%c",&answer);
    while(m)
    {
        if(answer=='y')
        {
            rewriteintegral(n1,summoney);
            Logout(11);
        }
        else if(answer=='n')
        {
            system("pause");
            Logout(11);
        }
        else
        {
            printf("出现错误，请重新确认是否继续(y/n)\n");
            scanf("%c",&answer);
        }
        system("pause");
    }
}

void reappearbooks(BOOK mes[])
{
    printf("图书销售管理系统>书籍管理>查看书目\n");
    int i;
    printf("图书号     图书名                图书价钱\n");
    FILE*fp;
    if((fp=fopen("BooksInformation.txt","r"))==NULL)
    {
        printf("Failure to open BooksInformation.txt!\n");
        exit(0);
    }
    for(i=0;i<ReadfromFile2(mes);i++)
    {
        printf("%-10d%-20s%8d\n",mes[i].number,
                                 mes[i].bookname,
                                 mes[i].price);
    }
    fflush(fp);
    fclose(fp);
}

int calculate(BOOK mes[],int n2,int amount)
{
    int sum;
    FILE*fp;
    if((fp=fopen("BooksInformation.txt","r"))==NULL)
    {
        printf("Failure to open BooksInformation.txt!\n");
        exit(0);
    }
    sum=mes[n2-1].price*amount;
    printf("你要购买的书籍为%s,数量为%d,总额为%d\n",mes[n2-1].bookname,
                                                  n2,   sum);
    fflush(fp);
    fclose(fp);
    return sum;
}

void rewriteintegral(int n1,int summoney)
{
    int n,a,b;
    INFORMATION inf[N];
    n=ReadfromFile1(inf);
    a=inf[n1-1].integral;
    b=inf[n1-1].integral;
    if(b>=summoney) b-=summoney;
    else if(b<summoney) printf("你的积分不够，不能购买！\n");
    FILE*fp;
    if(b<a)
    {
        inf[n1-1].integral=b;
        if((fp=fopen("MembersInformation.txt","w"))==NULL)
        {
            printf("Failure to open MembersInformation.txt!\n");
            exit(0);
        }
        for(int i=0;i<n;i++)
        fwrite(&inf[i],sizeof(INFORMATION),1,fp);
        fflush(fp);
        fclose(fp);
        printf("剩余积分：%d\n",inf[n1-1].integral);
    }
    system("pause");
    Logout(11);
}
