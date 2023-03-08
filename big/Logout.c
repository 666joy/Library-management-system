#include "database.h"
void Logout(int a)
{
    system("cls");
    switch(a)
    {
        case 1:main();
                break;
        case 11:PrimaryMenu();
                break;
        case 21:MemberManagement();
                break;
        case 22:BookManagement();
                break;
        default:printf("error return!\n");
    }
}
