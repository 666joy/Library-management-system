#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define N 20
typedef struct information
{
    int number;
    char name[10];
    int integral;
}INFORMATION;

typedef struct book
{
    int number;
    char bookname[30];
    int price;
}BOOK;

int main();
void PrimaryMenu();
void MemberManagement();

 void ShowMembers();
 void AddMember();
 void ModifyMember();

void BookManagement();

 void Bibliographica();
 void AddBook();
 void DeleteBook();

void ShoppingSettlement();
void Logout();

int ReadfromFile1(INFORMATION inf[]);
int ReadfromFile2(BOOK mes[]);

#endif // DATABASE_H_INCLUDED
