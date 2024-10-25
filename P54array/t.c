#include<stdio.h>
int main()
{
   //数组是一组相同类型元素的集合。
   //type arr_name[const_n]  type是数组的元素类型  const_n是一个常量表达式
    char arr3[10];
    float arr4[1];
    double arr5[20];

    int count = 10;
    int arr2[count];  //C99之后，数组大小可以是变量，支持变长数组
    char carr1[] = "abc";         //a b c \0
    char carr2[3] = {'a','b','c'};//a b c
//1. 数组是使用下标来访问的，下标是从0开始。
//2. 数组的大小可以通过计算得到。
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0; i < sz; ++i)
    {
        printf("%d ", arr1[i]); 
    }
    return 0;
}