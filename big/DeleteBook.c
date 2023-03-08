#include "database.h"
int find(BOOK mes[],char name[],int n);
void change(BOOK mes[],int k,int n);
void DeleteBook()
{
    system("cls");
    printf("图书销售管理系统 >书籍管理>删除书籍\n");
    int k,n;
    BOOK mes[N];
    char name[30];
    printf("请输入要删除的图书书名：");
    scanf("%s",name);
    n=ReadfromFile2(mes);
    k=find(mes,name,n);
    if(k==1) printf("未找到该书籍!\n");
    else printf("找到该图书，位置为：%d\n",k);
    change(mes,k,n);
    FILE*fp;
    if((fp=fopen("BooksInformation.txt","w"))==NULL)
    {
        printf("Failure to open BooksInformation.txt!\n");
        exit(0);
    }
    for(int i=0;i<n-1;i++)
    {
        fwrite(&mes[i],sizeof(BOOK),1,fp);
    }
    fflush(fp);
    fclose(fp);
    printf("删除成功！\n");
    system("pause");
    Logout(22);
}

int find(BOOK mes[],char name[],int n)
{
    int i,k=0;
    for(i=0;i<n;i++)
    {
        if(strcmp(mes[i].bookname,name)==0) k=i;
    }
    return k+1;
}

void change(BOOK mes[],int k,int n)
{
    int i=k-1;
    for(;i<n-1;i++)
    {
        strcpy(mes[i].bookname,mes[i+1].bookname);
        mes[i].price=mes[i+1].price;
    }
}
