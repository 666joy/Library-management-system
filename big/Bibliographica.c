#include "database.h"
void Bibliographica()
{
    system("cls");
    printf("ͼ�����۹���ϵͳ>�鼮����>�鿴��Ŀ\n");
    int i;
    BOOK mes[N];
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
