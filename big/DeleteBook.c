#include "database.h"
int find(BOOK mes[],char name[],int n);
void change(BOOK mes[],int k,int n);
void DeleteBook()
{
    system("cls");
    printf("ͼ�����۹���ϵͳ >�鼮����>ɾ���鼮\n");
    int k,n;
    BOOK mes[N];
    char name[30];
    printf("������Ҫɾ����ͼ��������");
    scanf("%s",name);
    n=ReadfromFile2(mes);
    k=find(mes,name,n);
    if(k==1) printf("δ�ҵ����鼮!\n");
    else printf("�ҵ���ͼ�飬λ��Ϊ��%d\n",k);
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
    printf("ɾ���ɹ���\n");
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
