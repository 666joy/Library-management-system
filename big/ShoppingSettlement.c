#include "database.h"
void reappearbooks(BOOK mes[]);
int calculate(BOOK mes[],int n2,int amount);
void rewriteintegral(int n1,int summoney);
void ShoppingSettlement()
{
    system("cls");
    printf("ͼ�����۹���ϵͳ >������� \n");
    int n1,n2,amount,summoney,m=1;
    char answer;
    BOOK mes[N];
    reappearbooks(mes);
    printf("�������Ա�ţ�");
    scanf("%d",&n1);
    printf("����������Ҫ������鼮��ţ�");
    scanf("%d",&n2);
    printf("��������Ҫ�����������");
    scanf("%d",&amount);
    summoney=calculate(mes,n2,amount);
    printf("�Ƿ����?(y/n)");
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
            printf("���ִ���������ȷ���Ƿ����(y/n)\n");
            scanf("%c",&answer);
        }
        system("pause");
    }
}

void reappearbooks(BOOK mes[])
{
    printf("ͼ�����۹���ϵͳ>�鼮����>�鿴��Ŀ\n");
    int i;
    printf("ͼ���     ͼ����                ͼ���Ǯ\n");
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
    printf("��Ҫ������鼮Ϊ%s,����Ϊ%d,�ܶ�Ϊ%d\n",mes[n2-1].bookname,
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
    else if(b<summoney) printf("��Ļ��ֲ��������ܹ���\n");
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
        printf("ʣ����֣�%d\n",inf[n1-1].integral);
    }
    system("pause");
    Logout(11);
}
