#ifndef _SQLIST_H_
#define _SQLIST_H_


#define MaxSize 50
typedef int ElemType;
typedef struct 
{
    ElemType data[MaxSize];
    int length;
}SqList;

//1.创建顺序表
void CreateList(SqList *&L, ElemType a[], int n);
//2.初始化顺序表
void InitList(SqList *&L);

//3.销毁线性表
void DestoryList(SqList *&L);

//4.求线性表的长度
int ListLength(SqList *L);

//5.输出线性表
void DisplayList(SqList *L);

//6.求线性表中的某个数据元素值
bool GetElem(SqList *L, ElemType &a, int i);

//7.按元素值查找
int LocateElem(SqList *L, ElemType e);

//8.插入数据元素
bool ListInsert(SqList *&L, int i, ElemType e);

//9.删除数据元素
bool ListDelete(SqList *&L, int i, ElemType &e);

//顺序表的应用示例1 删除所有值等于x的元素，时间复杂度为O(n),空间复杂度为O(1)
void delnode1(SqList *&L, ElemType x);

//顺序表的应用示例2 删除所有值等于x的元素，时间复杂度为O(n),空间复杂度为O(1)
void delnode2(SqList *&L, ElemType x);

/*顺序表的应用示例：顺序表L，以第一个元素为基准
将所有小于等于它的元素移动到该基准的前面，将所有大于他的元素移动到后面(分治)*/
void partition1(SqList *&L);

/*顺序表的应用示例：顺序表L，以第一个元素为基准
将所有小于等于它的元素移动到该基准的前面，将所有大于他的元素移动到后面(分治)*/
void partition2(SqList *&L);

//顺序表的应用示例 所有奇数移动到偶数前面
void move1(SqList *&L);

//顺序表的应用示例 所有奇数移动到偶数前面
void move2(SqList *&L);

//交换函数
void swap(int &a,int &b);

#endif