#include "database.h"
void Bibliographica()
{
    system("cls");
    printf("图书销售管理系统>书籍管理>查看书目\n");
    int i;
    BOOK mes[N];
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
    system("pause");
    Logout(22);
}

int ReadfromFile2(BOOK mes[])
{
    FILE*fp;
    int i;
    if((fp=fopen("BooksInformation.txt","r"))==NULL)
    {
        printf("Failure to open BooksInformation.txt!\n");
        exit(0);
    }
    for(i=0;!feof(fp);i++)
    {
        fread(&mes[i],sizeof(BOOK),1,fp);
    }
    fflush(fp);
    fclose(fp);
    return i-1;
}
