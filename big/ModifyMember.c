#include "database.h"
void modify(INFORMATION inf[],int k);
void ModifyMember()
{
    system("cls");
    printf("ͼ�����۹���ϵͳ > ��Ա��Ϣ���� >�޸Ļ�Ա��Ϣ\n");
    int i,k,n;
    INFORMATION inf[N];
    printf("������Ҫ�޸ĵĻ�Ա�ţ�");
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
    printf("�޸ĳɹ���\n");
    system("pause");
    Logout(21);
}

void modify(INFORMATION inf[],int k)
{
    char a[10];
    inf[k-1].number=k;
    printf("������Ҫ�޸ĵĻ�Ա����");
    scanf("%s",a);
    strcpy(inf[k-1].name,a);
    printf("������Ҫ�޸ĵĻ�Ա���֣�");
    scanf("%d",&inf[k-1].integral);
}
