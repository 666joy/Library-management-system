#include "database.h"
void Input2(BOOK mes[],int n);
void WritetoFile2(BOOK mes[],int n);
void AddBook()
{
    system("cls");
    printf("ͼ�����۹���ϵͳ >�鼮����>����鼮\n");
    BOOK mes[N];
    int n=ReadfromFile2(mes);
    mes[n].number=n+1;
    Input2(mes,n);
    WritetoFile2(mes,n);
}

void Input2(BOOK mes[],int n)
{
    printf("������ͼ������");
    scanf("%s",mes[n].bookname);
    printf("������ͼ���Ǯ��");
    scanf("%d",&mes[n].price);
}

void WritetoFile2(BOOK mes[],int n)
{
    FILE*fp;
    if((fp=fopen("BooksInformation.txt","a"))==NULL)
    {
        printf("Failure to open BooksInformation.txt!\n");
        exit(0);
    }
    fwrite(&mes[n],sizeof(BOOK),1,fp);
    fflush(fp);
    fclose(fp);
    printf("��ӳɹ���\n");
    system("pause");
    Logout(22);
}
