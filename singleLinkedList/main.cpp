#include <stdio.h>
#include <stdlib.h>
#include "linknode.h"

int main()
{
    LinkNode *L;
    ElemType e;
    int a[10] = {3, 8, 2, 7, 1, 5, 3, 4, 6, 0};
    InitList(L);
    CreateListF(L, a, 10);
    DispList(L);
    printf("------------\n");

    if (GetElem(L, 2, e))
        printf("��2��Ԫ��Ϊ%d\n", e);
    else
    {
        printf("��Ŵ���\n");
        printf("------------\n");
    }
    printf("�ҵ���Ϊ1��Ԫ�����Ϊ��%d\n", LocateElem(L, 1));
    printf("------------\n");
    if (ListInsert(L, 1, 10))
    {
        DispList(L);
        printf("------------\n");
    }
    else
    {
        printf("������������ԣ�\n");
        printf("------------\n");
    }
    if (ListDelete(L, 11, e))
    {
        printf("ɾ����Ԫ��Ϊ%d\n", e);
        DispList(L);
        printf("------------\n");
    }
    else
    {
        printf("ɾ��Ԫ�ش���\n");
        printf("------------\n");
    }

    DestoryList(L);
    return 0;
}