#include<stdio.h>
int main()
{
   //������һ����ͬ����Ԫ�صļ��ϡ�
   //type arr_name[const_n]  type�������Ԫ������  const_n��һ���������ʽ
    char arr3[10];
    float arr4[1];
    double arr5[20];

    int count = 10;
    int arr2[count];  //C99֮�������С�����Ǳ�����֧�ֱ䳤����
    char carr1[] = "abc";         //a b c \0
    char carr2[3] = {'a','b','c'};//a b c
//1. ������ʹ���±������ʵģ��±��Ǵ�0��ʼ��
//2. ����Ĵ�С����ͨ������õ���
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0; i < sz; ++i)
    {
        printf("%d ", arr1[i]); 
    }
    return 0;
}